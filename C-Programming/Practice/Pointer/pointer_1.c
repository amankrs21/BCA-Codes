#include<stdio.h>
void main()
{
    int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("\n Value of x is %d",x);
    printf("\n\n\n %d is stored at address %u",x,&x);
    printf("\n %d is stored at address %u",*&x,&x);
    printf("\n %d is stored at address %u",*ptr,ptr);
    printf("\n %d is stored at address %u",ptr,&ptr);
    printf("\n %d is stored at address %u",y,&y);
    *ptr = 25;
    printf("\n\n Now x = %d",x);
    getchar();
}