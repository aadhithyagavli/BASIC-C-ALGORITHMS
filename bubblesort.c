#include <stdio.h>

int main()
{
    int arr[] = {8,6,7,4,5,2,9};
    int  temp;
    int n= sizeof(arr)/sizeof(arr[0]);


    for(int i = 0; i < n-1 ; i++)
    {
        for(int j = 0; j < n-1-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",arr[i]);
    }
}
    

