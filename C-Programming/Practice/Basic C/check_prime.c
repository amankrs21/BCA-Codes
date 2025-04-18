//program to check number is Prime or Not.
#include<stdio.h>
int main()
{
    int num,i,prime=0;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    for ( i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("\n %d is NOT a Prime Number",num);
    }
    else
    {
        printf("\n %d is Prime Number",num);
    }
    return 0;
}