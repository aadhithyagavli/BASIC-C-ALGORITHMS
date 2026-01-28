#include <stdio.h>

// Function to display the array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a given index
// returns the new size of the array
int insert(int arr[], int size, int capacity, int element, int index) {
    if (size >= capacity) {
        printf("Error: Array is full!\n");
        return size;
    }
    if (index < 0 || index > size) {
        printf("Error: Invalid index!\n");
        return size;
    }

    // Shift elements to the right to create space
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
    return size + 1; // Return updated size
}

// Function to delete an element at a given index
// returns the new size of the array
int delete(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Error: Invalid index!\n");
        return size;
    }

    // Shift elements to the left to fill the gap
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1; // Return updated size
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int capacity = 100;

    printf("Original array: ");
    display(arr, size);

    // --- Insertion ---
    // Insert 25 at index 2
    size = insert(arr, size, capacity, 25, 2);
    printf("After inserting 25 at index 2: ");
    display(arr, size);

    // --- Deletion ---
    // Delete element at index 3 (which is 30)
    size = delete(arr, size, 3);
    printf("After deleting element at index 3: ");
    display(arr, size);

    return 0;
}