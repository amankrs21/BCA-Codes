//program tp print number is palindrome or Not.
#include<stdio.h>
int main()
{
    int num, rem, sum=0, copy_num;
    printf("\n Enter any Number: ");
    scanf("%d",&num);
    copy_num = num;
    //logic
    while (num>0)
    {
        rem = num%10;
        num = num/10;
        sum = rem + (sum * 10);
    }
    if (sum==copy_num)
    {
        printf("\n %d is Palindrome",copy_num);
    }
    else
    {
        printf("\n %d is Not Palindrome",copy_num);
    }
    getch();
}