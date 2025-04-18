//program to print reverse order of any number
#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        //logic to print number in reverse order
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    printf("\n Reverse Order is --> %d",rev);
    return 0;
}