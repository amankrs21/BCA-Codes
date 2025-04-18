//program to calculate simple interest.
#include<stdio.h>
int main()
{
    int p, r, t, simple;
    printf("\n Enter the Principal Amount: ");
    scanf("%d",&p);
    printf(" Enter Rate of Interest: ");
    scanf("%d",&r);
    printf(" Enter Time: ");
    scanf("%d",&t);
    simple = (p*r*t)/100;
    printf("\n Simple Interest is --> %d",simple);
    return 0;
}