//program to check number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int num,o_num,last,count,sum=0;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    // sum = 0;
    o_num = num;
    count = (int)log10(num) + 1;
    while (num > 0)
    {
        last = num % 10;
        sum = sum + (int)pow(last,count);
        num = num / 10;
    }
    if (o_num == sum)
    {
        printf("\n %d is a Armstrong Number",o_num);
    }
    else
    {
        printf("\n %d is not a Armstrong Number",o_num);
    }
    return 0;
}