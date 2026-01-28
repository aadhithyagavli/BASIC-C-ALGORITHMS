#include <stdio.h>

int main()
{
    int i , j, key;
    int arr[]= {9,2,7,3,5,4,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(i = 0 ; i < n ; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
    }

    

    printf("Sorted Array: \n");
    for(i = 0 ; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}