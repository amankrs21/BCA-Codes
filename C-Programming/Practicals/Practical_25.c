//program to print fibonasis series for 'n' numbers 
#include<stdio.h>
void main()
{
    int n1 = 0, n2 = 1, n3, num, i;
    printf("\n Enter the Limit : ");
    scanf("%d",&num);
    printf("\n %d, %d,",n1,n2);
    for ( i = 2; i < num; i++)
    {
        n3 = n1 + n2;
        printf(" %d,",n3);
        n1 = n2;
        n2 = n3;
    }
}