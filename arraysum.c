#include <stdio.h>

int main()
{
    int n , i;
    printf("Enter the number of elements you want the arrays: ");
    scanf("%d", &n);

    int A[n] , B[n] , sum[n];

    printf("Enter the elements of the first Array: ");
    for(i =0; i < n ; i++)
    {
        scanf("%d", &A[i]);
    }

    
    printf("Enter the elements of the Second Array: ");
    for(i =0; i < n ; i++)
    {
        scanf("%d", &B[i]);
    }

    
    
    for(i =0; i < n ; i++)
    {
        sum[i] = A[i] + B[i];
    }

    printf("Sum of two arrays: ");
    for(i =0; i < n ; i++)
    {
        printf("%d ",sum[i]);
    }
    printf("\n");
}