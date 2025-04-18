//Example to find factorial of number using recussive funtion
#include<stdio.h>
long int fact_num(int n);
int main()
{
    int n;
    printf("\n Enter a positive integer: ");
    scanf("%d",&n);
    printf("\n Factorial of %d! is --> %d",n,fact_num(n));
    return 0;
}
long int fact_num(int n)
{
    if (n>=1)
    {
        return n*fact_num(n-1);
    }
    else
    {
        return 1;
    }
}