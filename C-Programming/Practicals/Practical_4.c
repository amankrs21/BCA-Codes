//Write a Program to perform addition of two numbers.
#include<stdio.h>
main()
{
    float a, b, sum;
    printf("\n Enter Number 1: ");
    scanf("%f", &a);
    printf("\n Enter Number 2: ");
    scanf("%f", &b);
    sum = a + b;
    printf("\n Addition is: %.2f", sum);
    getch();
}
