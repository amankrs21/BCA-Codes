//program to print list of perfect numbers in the Range of given numbers.
#include<stdio.h>
int main()
{
    int range, i, j, sum=0;
    printf("\n Eneter the Range: ");
    scanf("%d",&range);
    //logic for perfect number
    for ( i = 1; i <= range; i++)
    {
        sum=0;
        for ( j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum =sum + j;
            }
        }
        if(sum==i)
        {
            printf("\n %d",i);
        }
    }
    getch();
}