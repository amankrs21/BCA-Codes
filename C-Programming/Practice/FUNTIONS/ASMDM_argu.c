//program which shows funtion without return type with argument.
//to perform Arithmetic Progression.
#include<stdio.h>
void add(float m, float n);
void sub(float m, float n);
void multy(float m, float n);
void div(float m, float n);
void modulo(int m, int n);
int main()
{
    float num1,num2;
    printf("\n Enter Number 1 : ");
    scanf("%f",&num1);
    printf("\n Enter Number 2 : ");
    scanf("%f",&num2);
    add(num1,num2);
    sub(num1,num2);
    multy(num1,num2);
    div(num1,num2);
    modulo(num1,num2);
    return 0;
}
void add(float m, float n)
{
    printf("\n Addition is --> %.2f",m+n);
}
void sub(float m, float n)
{
    printf("\n Substraction is --> %.2f",m-n);
}
void multy(float m, float n)
{
    printf("\n Multiplicaton is --> %.2f",m*n);
}
void div(float m, float n)
{
    printf("\n Division is--> %.2f",m/n);
}
void modulo(int m, int n)
{
    printf("\n Modulo is --> %d",m%n);
}