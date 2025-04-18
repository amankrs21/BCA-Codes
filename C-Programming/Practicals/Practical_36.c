 //program to print pascal traingle
#include<stdio.h>
void main()
{
    int i,j,k,row,num = 1;
    printf("\n Enter the Rows : ");
    scanf("%d",&row);
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < row - i; k++)
        {
            printf(" ");
        }
        num = 1;
        for ( j = 0; j <= i; j++)
        {
            printf(" %d",num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}