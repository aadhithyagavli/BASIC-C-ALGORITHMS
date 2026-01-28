#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = -1;
    int low =0 , high = n-1;
    int key;


    printf("Enter element to be found from the array: ");
    scanf("%d",&key);

    for(int i = 0; i < n ; i++)
    {
        if(arr[i] == key)
        {
            found = i;
            break;
        }
    }
    if(found != -1)
    {
        printf("Element found at the index %d\n",found);
    }
    else
    {
        printf("%d is not in the array\n",key);
    }



}