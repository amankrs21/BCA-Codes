#include<stdio.h>
void main()
{
    int array[5], i;
    int *ptr;
    ptr = array;
    for ( i = 0; i < 5; i++)
    {
        printf(" Enter Elements : ");
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf(" %d",*(ptr+i));
    }
    
}