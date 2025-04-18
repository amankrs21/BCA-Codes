#include<stdio.h>
void main()
{
    int array[5],*ptr;
    int i;
    ptr = array;
    for ( i = 0; i < 5; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf(" Value is %d and address is %d \n",array[i],*(ptr+i));
    }
}