//program to find power of any number
#include<stdio.h>
int main()
{
    int num,power,pow,i;
    printf("\n Enter Number: ");
    scanf("%d",&num);
    printf(" Enter Power: ");
    scanf("%d",&pow);
    for ( i = 1; i <= pow; i++)
    {
        power = num * num;
    }
    printf("\n Power is --> %d",power);
    getch();
}