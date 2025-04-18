//program to add odd numbers from 1 to n.
#include<stdio.h>
int main()
{
    int limit,i,sum=0;
    printf("\n Enter the Limit of Odd Numbers : ");
    scanf("%d",&limit);
    i = 1;
    while (i <= limit)
    {
        sum = sum + i;
        i = i+2;
    }
    printf("\n Sum of Odd Numbers from 1 to %d is --> %d",limit,sum);
    getch();
}