//program to add even numbers from 1 to n numbers.
#include<stdio.h>
int main()
{
    int limit,i,sum=0;
    printf("\n Enter the Limit of Even Numbers : ");
    scanf("%d",&limit);
    for ( i = 2; i < limit; i=i+2)
    {
        sum = sum + i;
    }
    printf("\n Sum of Even Numbers from 1 to %d is --> %d ",limit,sum);
    getch();
}