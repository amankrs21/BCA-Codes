//program that shows the matrix by using array
#include<stdio.h>
int main()
{
    int matrix[10][10], i, j, r, c;
    printf("Enter the rows of martix: ");
    scanf("%d",&r);
    printf("Enter the columns of martix: ");
    scanf("%d",&c);
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Enter Elements of the Matrix: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\n Matrix made by your Input :\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}