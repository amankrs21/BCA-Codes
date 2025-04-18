//Program to substract two matrix.
#include <stdio.h>
int main()
{
    int matrix_1[10][10], matrix_2[10][10], matrix_3[10][10];
    int a, b, i, j;

    printf("\n Enter total Rows: ");
    scanf("%d", &a);
    printf(" Enter total Columns: ");
    scanf("%d", &b);

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of Matrix 1: ");
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" Enter the elements of Matrix 2: ");
            scanf("%d", &matrix_2[i][j]);
        }
    }
    
    printf("\n\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matrix_3[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }

    printf("\n Matrix 1 is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix_1[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix 2 is: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix_2[i][j]);
        }
        printf("\n");
    }

    printf("\n Substraction of Matrix 1 and Matrix 2: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("\t%d", matrix_3[i][j]);
        }
        printf("\n");
    }

    printf("\n\n press any key to exit from this program...");
    getch();
}
