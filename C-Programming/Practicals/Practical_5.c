// Write a Program to perform arithmetic operation for two numbers. (take input of
// number from keyboard using scanf()) (perform addition, subtraction,
// multiplication, division and also find modulo


#include<stdio.h>
main()
{
    int num1,num2,add,sub,multi,div,mod;
    printf("\n----------------------------------------------------");
    printf("\n                Enter Number 1: ");
    scanf("%d",&num1);
    printf("                Enter Number 2: ");
    scanf("%d",&num2);
    printf("\n----------------------------------------------------");
    add=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    printf("\n----------------------------------------------------");
    printf("\n Arithmetic Operations for %d and %d are follows:-",num1,num2);
    printf("\n Addition: %d \n Substraction: %d \n Multiplication: %d \n Division: %d \n Modulo: %d ",add,sub,multi,div,mod);
    printf("\n----------------------------------------------------\n");
    getch();
}