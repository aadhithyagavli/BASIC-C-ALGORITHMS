#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input size of array
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print result
    printf("Sum of elements = %d\n", sum);

    return 0;
}