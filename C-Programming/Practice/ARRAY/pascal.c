//program to print pascal traingle
#include<stdio.h>
void main()
{
    int i,j,k,no,n;
    printf("\n Enter the Rows : ");
    scanf("%d",&no);
    for ( i = 0; i < no; i++)
    {
        for ( j = 0; j < no - i; j++)
        {
            printf(" ");
        }
        n = 1;
        for ( k = 0; k <= i; k++)
        {
            printf(" %d",n);
            n = n * (i - k) / (k + 1);
        }
        printf("\n");
    }
}