#include <stdio.h>

int main()
{
    int n , i , c , sum = 0 , r , temp;
    printf("Enter the number: ");
    scanf("%d",&n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n= temp;
    if(n == sum)
    {
        printf("%d is an amstrong number\n",n);
    }
    else
    {
        printf("%d is not an amstrong number\n",n);
    }
}