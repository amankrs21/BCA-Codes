//program to print different pattern using Star numbers and elements
#include<stdio.h>
void main()
{
    int i,j,num;
    printf("\n Enter Rows : ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < i+1; j++)
       {
           printf(" *");
       }
       printf("\n");
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < i+1; j++)
       {
           printf(" %d",i);
       }
       printf("\n");
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
       for ( j = 1; j < i+1; j++)
       {
           printf(" %d",j);
       }
       printf("\n");
    }
    printf("\n");
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < i; j++)
       {
           printf(" %c",'A' + j);
       }
       printf("\n");
    }   
}