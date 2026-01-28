#include <stdio.h>

void generateFibonacci(int arr[], int n) {
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

void insertElement(int arr[], int *n, int pos, int value) {
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    (*n)++;
}

int main() {
    int arr[100], n = 10;
    generateFibonacci(arr, n);

    printf("Original Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    int pos, value;
    printf("\nEnter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    insertElement(arr, &n, pos, value);

    printf("After insertion:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}