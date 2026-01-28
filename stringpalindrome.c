#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i , j , f = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);

    for(i = 0 ; i < n/2 ; i++)
    {
        
            if(str[i] != str[n - 1 - i])
            {
                f = 0;
                break;
            }
        
    }

    if(f == 1)
    {
        printf("it is an palindrome\n");
    }
    else
    {
        printf("It is not palindrome\n");
    }


}