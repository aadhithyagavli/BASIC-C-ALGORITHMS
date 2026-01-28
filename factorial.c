#include <stdio.h>

int main()
{
    int i;
    int n ;
    int f = 1;

    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(i = 1 ; i < n; i++)
    {
        if(n % i == 0)
        {
            ++f;
        }
    }

    printf("Count: %d\n",f);

}

