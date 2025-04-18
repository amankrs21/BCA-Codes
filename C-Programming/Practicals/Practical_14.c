//  Write a program to find simple interest. (formula interest = (PRN) / 100)


#include<stdio.h>
void main()
{
    float time,principal,int_rate,simple_interest;
    printf("\n Enter Principal Amount: Rs ");
    scanf("%f",&principal);
    printf("\n Enter Rate of Interest(in percentage): ");  //Rate of Interest is always in percentage
    scanf("%f",&int_rate);
    printf("\n Enter Time(in Year): ");
    scanf("%f",&time);
    simple_interest = (principal*int_rate*time)/100;
    printf("\n Simple Interest is: Rs %.2f",simple_interest);
    getchar();
}
