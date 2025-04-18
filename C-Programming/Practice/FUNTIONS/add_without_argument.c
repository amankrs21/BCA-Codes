//example for funtion without return type without argument
//to perform addition
#include<stdio.h>
void addition();    //prototype
void main()
{
    addition(); //calling of funtion in main funtion
    addition(); //how much times we call we can use the code.
    getch();
}
//defintion of funtion
void addition()
{
    int num1,num2;
    printf("\n Enter the Number 1: ");
    scanf("%d",&num1);
    printf(" Enter the Number 2: ");
    scanf("%d",&num2);
    printf("\n Addition is --> %d",num1 + num2);
}