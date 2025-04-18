//program to multiply of same order two square matrices.
#include <stdio.h>
int main()
{
    int matrix_1[5][5], matrix_2[5][5], matrix_3[5][5];
    int i, j, k, m;

    //taking input of order of both square matrix
    printf("\n Enter the order of Square Matrix 1: ");
    scanf("%d",&m);
    
    //taking input of matrix 1
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" Enter the elements of Matrix 1: ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    //taking input of matrix 2
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" Enter the elements of Matrix 2: ");
            scanf("%d", &matrix_2[i][j]);
        }
    }

    //process of multiplication
    printf("\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix_3[i][j]=0;   //intializing the final value that doesn't allow the variable to take garbage value
            for (k = 0; k < m; k++)
            {
                matrix_3[i][j] = matrix_3[i][j] + (matrix_1[i][j] * matrix_2[i][j]);
            }
        }
    }

    //printing of matrix 1
    printf("\n Matrix 1 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", matrix_1[i][j]);
        }
        printf("\n");
    }

    //printing of matrix 2
    printf("\n Matrix 2 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", matrix_2[i][j]);
        }
        printf("\n");
    }

    //printing of multiplication of matrix 1 and matrix 2
    printf("\n Multiplication Of Matrix 1 & Matrix 2 is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", matrix_3[i][j]);
        }
        printf("\n");
    }

    printf("\n\npress any key to exit....");
    getch();
}
