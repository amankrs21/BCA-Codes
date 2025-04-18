//program to multiply of all digits of a number
#include<stdio.h>
int main()
{
    int num,multi=1;
    printf("\n Enter any number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        multi *= num % 10;
        num = num / 10;
    }
    printf("\n Multiplication is --> %d",multi);
    getch();
}