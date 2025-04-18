//example for funtion without return type without argument
//to perform multiplication, division and Modulo
#include<stdio.h>
void addition();
void substraction();
void multiplication();
void division();
void modulo();
int num1, num2;     //global variable
void main()
{
    //caliing of funtion in main funtions
    printf("\n Enter Number 1 and Number 2  : \n");
    scanf("%d%d",&num1,&num2);
    addition();
    substraction();
    multiplication();  
    division();
    modulo();
}
//defintion of funtions

void addition()
{
    printf("\n Additon is --> %d",num1+num2);
}
void substraction()
{
    printf("\n Substraction is --> %d",num1-num2);
}
void multiplication()
{
    printf("\n Multiplication is --> %d",num1*num2);
}
void division()
{
    printf("\n Division is --> %d",num1/num2);
}
void modulo()
{
    printf("\n Modulo is -->> %d",num1%num2);
}