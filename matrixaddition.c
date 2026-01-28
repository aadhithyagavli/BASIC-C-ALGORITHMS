#include <stdio.h>

int main()
{
    int i , j , k;
    int m , n , p ,q;


    printf("Enter the number of rows and coloums you want for the first matrix: ");
    scanf("%d %d",&m , &n);

    printf("Enter the number of rows and coloums you want for the first matrix: ");
    scanf("%d %d",&p , &q);

    if(n != p)
    {
        printf("The matrix Addition is not possible\n");
    }

    int A[m][n] , B[p][q] , C[m][q];

    //Will store the elements of the first matrix
    printf("Enter the elements for the first matrix:  ");
    for(i = 0;i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
        
    }
    // Will store the elements of the second matrix
    printf("Enter the elements for the second matrix:  ");
    for(i = 0;i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
        
    }

    // Adds both matrices and store its in another matrix c
    for(i = 0;i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = A[i][j] + B[i][j];

        }
        
    }

    //Prints the resultant matrix
    printf("Resultant Matrix:\n");
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





}