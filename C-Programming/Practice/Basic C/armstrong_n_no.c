//program to print number is Armstrong or not(for n numbers)
#include<stdio.h>
#include<math.h>
int main()
{
    int no,rem,sum=0,no_copy,cnt=0,no_copy2;
    printf("\n Enter Number: ");
    scanf("%d",&no);
    no_copy=no;
    no_copy2=no;
    //lenght of No
    while (no>0)
    {
        ++cnt;
        no = no/10;
    }
    //printf("\n Length of No: %d",cnt);
    //logic for armstrong
    while (no_copy>0)
    {
        rem = no_copy%10;
        sum = sum + pow(rem,cnt);
        no_copy = no_copy/10;
    }
    if(sum==no_copy2)
    {
        printf("\n %d is Armstrong",no_copy2);
    }
    else
    {
        printf("\n %d is not Armstrong",no_copy2);
    }
    getch();
}