#include <stdio.h>

void generateFibonacci(int arr[], int n) {
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i+1];
    }
    (*n)--;
}

int main() {
    int arr[100], n = 10;
    generateFibonacci(arr, n);

    printf("Original Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    int pos;
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    deleteElement(arr, &n, pos);

    printf("After deletion:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}