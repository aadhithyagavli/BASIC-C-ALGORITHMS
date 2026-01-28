#include <stdio.h>

int main()
{
    int sum = 0; int n ; int r; int temp;
    

    printf("Enter the number to check if it is palindrome or not: ");
    scanf("%d",&n);

    temp = n;

    while(n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    n = temp;

    if(n == sum)
    {
        printf("Yes! %d is a palindrome number\n" , n);
    }
    else
    {
        printf("Nope! %d is a palindrome number\n" , n);
    }

}