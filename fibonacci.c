#include <stdio.h>

int main()
{
    int a = 0 ; int b = 1;int  c;
    int n;

    printf("Enter limit: ");
    scanf("%d",&n);

    for(int i = 1; i <= n ; i++)
    {
        printf("%d\n",a);
        c = a+ b;
        a = b;
        b = c;
    }

}

