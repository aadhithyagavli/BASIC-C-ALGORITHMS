#include <stdio.h>

int main() {
    int arr[100];       // Array to hold elements
    int n;              // Number of elements
    int *ptr;           // Pointer to array

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = arr; // Point to the first element of the array

    // Reading elements using pointer
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  // Store input directly using pointer arithmetic
    }

    // Displaying elements using pointer
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // Access values using pointer dereferencing
    }

    return 0;
}