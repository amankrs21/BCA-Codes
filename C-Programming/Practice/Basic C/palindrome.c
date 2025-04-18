//program to print number is palindrome or not
#include<stdio.h>
int main()
{
    int num,reverse=0,copy_num;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    copy_num = num;
    while (num!=0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    printf("\n Reverse is : %d",reverse);
    if (copy_num == reverse)
    {
        printf("\n %d is a Palindrome Number",copy_num);
    }
    else
    {
        printf("\n %d is NOT Palindrome Number",copy_num);
    }
    return 0;
}