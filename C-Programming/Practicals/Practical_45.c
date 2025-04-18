//program to add elements of 2-D array
#include<stdio.h>
void main()
{
    int array[10][10];
    int i, j, row, col, sum = 0;
    printf("\n Enter the Size of Row: ");
    scanf("%d", &row);
    printf(" Enter the Size of Column : ");
    scanf("%d",&col);

    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf(" Enter the Elements of Array: ");
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            sum = sum + array[i][j];
        }        
    }
    printf("\n Sum of all elements of array is: %d", sum);
}