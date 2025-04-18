//program to find GCD
#include<stdio.h>
int main()
{
    int num1, num2, i, GCD, LCM;
    printf("\n Enter Number 1: ");
    scanf("%d",&num1);
    printf(" Enter Number 2: ");
    scanf("%d",&num2);
    for ( i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            GCD = i;
        }
    }
    LCM = (num1*num2)/GCD;
    printf("\n Value of GCD is : %d",GCD);
    printf("\n Value of LCM is : %d",LCM);
}