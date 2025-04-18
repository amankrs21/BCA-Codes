//program to sum natural numbers form 1 to n numbers.
#include<stdio.h>
int main()
{
    int range,i,sum=0;
    printf("\n Enter the range of natural Numbers : ");
    scanf("%d",&range);
    i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while ( i <= range);
    printf("\n Sum of Natural Numbers from 1 to %d is --> %d",range,sum);
    getch();
}