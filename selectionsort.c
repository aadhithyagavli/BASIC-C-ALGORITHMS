#include <stdio.h>

int main()
{
    int arr[] = {3,8,6,7,2,9,1};
    int i , j , temp ,  min;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(i = 0 ; i < n -1; i++)
    {
        min = i;
        for(j = i+1; j < n ; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted Array: \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",arr[i]);
    }
}

