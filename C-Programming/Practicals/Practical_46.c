//program to add two matrices
#include <stdio.h>
int main()
{
    int matrix1[10][10], matrix2[10][10], matrix3[10][10];
    int a, b, c, i, j;

    printf("\n Enter the Rows of Matrix: ");
    scanf("%d", &a);
    printf(" Enter the Columns of Matrix: ");
    scanf("%d", &b);

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of 1st matrices: ");
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of 2nd matrices: ");
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\n\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n First Matrix is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n Second Matrix is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n Addition of Matrix_1 and Matrix_2 is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix3[i][j]);
        }
        printf("\n");
    }

    printf("\n\npress any key to exit from this program...");
    getch();
}
