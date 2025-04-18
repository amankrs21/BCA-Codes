//program to find factorial of Number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    unsigned long long fact=1;
    printf("\n Enter any number to find Factorial: ");
    scanf("%d",&num);
    if (num==0)
    {
        fact = 1;
    }
    else if (num==1)
    {
        fact = 1;
    }
    else
    {
        for ( i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    printf("\n Factorial of entered number is: %llu",fact);
    getch();
}