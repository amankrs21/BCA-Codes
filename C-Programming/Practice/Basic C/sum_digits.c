//program to add digits of a number.
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        //sum add and stores last digits
        sum += num % 10;
        //num / 10 removes last digits
        num = num / 10;
        //we remove last digit because last digit is already added in the sum variable
        //if we not remove the last digit then loop becomes infinte
    }
    // do
    // {
    //     sum += num % 10;
    //     num = num / 10;
    // } while (num!=0);
    printf("\n Sum of digits is --> %d",sum);
    getch();
}