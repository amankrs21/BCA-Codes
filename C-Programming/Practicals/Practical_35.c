//program to print Pyramid of star, numbers and alphabets
#include<stdio.h>
void main()
{
    int i,j,k,count;
    printf("\n Enter Rows : ");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        for ( k = 0; k < count-i; k++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for ( i = count; i >= 0; i--)
    {
        for ( k = 0; k < count-i; k++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for ( i = 0; i < count; i++)
    {
        for ( k = 0; k < count-i; k++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    for ( i = count; i >= 0; i--)
    {
        for ( k = 0; k < count-i; k++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf(" %c",'A' + j);
        }
        printf("\n");
    }
}