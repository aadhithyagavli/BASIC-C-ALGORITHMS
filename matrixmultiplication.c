#include <stdio.h>


int main()
{
    int m , n , p ,q;
    int i , j , k;

    printf("Enter the no of rows of the first matrix:  ");
    scanf("%d %d", &m , &n);

    printf("Enter the no of rows of the first matrix:  ");
    scanf("%d %d", &p , &q);

    if(n != p)
    {
        printf("The formation of matrix is not possible\n");
    }

    int A[m][n] , B[p][q] , C[m][q];

    printf("Enter the elements of the first matrix: ");
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements of the Second matrix: ");
    for(i = 0 ; i < p ; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0; j < q; j++)
        {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    return 0;






}