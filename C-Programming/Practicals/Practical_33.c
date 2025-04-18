//program to find number is armstrong or not(for three digits)
#include<stdio.h>
int main()
{
    int no,rem,sum=0,no_copy;
    printf("\n ENter any 3 digit number: ");
    scanf ("%d",&no);
    no_copy = no;
    //logic for armstrong
    while (no>0)
    {
        rem = no % 10;
        sum = sum + (rem * rem * rem);
        no = no/10;
    }
    if (sum == no_copy)
    {
        printf("\n %d is Armstrong",no_copy);
    }
    else
    {
        printf("\n %d is not Armstrong",no_copy);
    }
    getch();
}