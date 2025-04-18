//program to multiply two matrices.
#include <stdio.h>
int main()
{
    int matrix_1[10][10], matrix_2[10][10], matrix_3[10][10];
    int i, j, k, m, n, o;

    printf("\n Enter the Rows of Matrix 1: ");
    scanf("%d",&m);
    printf("  Enter Columns of Matrix 2: ");
    scanf("%d",&n);

    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" Enter the elements of Matrix 1: ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    //we know column of matrix 1 is the row of matrix 2 otherwise it will be invalid.
    printf("\n Enter the columns of Matrix 2: ");
    scanf("%d",&o);

    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < o; j++)
        {
            printf(" Enter the elements of Matrix 2: ");
            scanf("%d", &matrix_2[i][j]);
        }
    }

    printf("\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrix_3[i][j]=0;
            for (k = 0; k < o; k++)
            {
                matrix_3[i][j] = matrix_3[i][j] + (matrix_1[i][j] * matrix_2[i][j]);
            }
        }
    }

    printf("\n Matrix 1 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", matrix_1[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix 2 is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < o; j++)
        {
            printf("\t%d", matrix_2[i][j]);
        }
        printf("\n");
    }

    printf("\n Multiplication Of Matrix 1 & Matrix 2 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < o; j++)
        {
            printf("\t%d", matrix_3[i][j]);
        }
        printf("\n");
    }

    getch();
}
