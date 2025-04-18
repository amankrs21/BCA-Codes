#include<stdio.h>
void main()
{
    char a;
    int x,*ptr;
    float p,q;
    *ptr = a;
    a = 'A';
    x = 125;
    p = 10.25, q = 18.76;
    printf("\n %c is stored at addr %u",a,&a);
    printf("\n %d is stored at addr %u",x,&x);
    printf("\n %f is stored at addr %u",p,&p);
    printf("\n %f is stored at addr %u",q,&q);
    printf("\n Address of %c is %d",a,*ptr);
}