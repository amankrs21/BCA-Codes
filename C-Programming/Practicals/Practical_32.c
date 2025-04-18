//program to check no. is magic or not
#include<stdio.h>
int  main()
{
    int no,mul,rem,sum=0,copy_sum,sum_rev=0,no_copy;
    printf("\n Enter any no: ");
    scanf("%d",&no);
    no_copy = no;
    while (no>0)
    {
        rem = no%10;
        no = no/10;
        sum = sum + rem;
    }
    copy_sum = sum;
    //reverse the sum
    while (sum>0)
    {
        rem = sum%10;
        sum = sum/10;
        sum_rev =rem +(sum_rev * 10);
    }
    mul = copy_sum * sum_rev;
    if(mul == no_copy)
    {
        printf("\n Magic Number");
    }
    else
    {
        printf("\n Not Magic");
    }
    getch();
}
