//perfect number mean addition of their factor is equal to the no.
// 1, 2, 3 is the divisior of 6 and 1+2+3 is equal to 6.

//program to check numbers is perfect or not
#include<stdio.h>
int main()
{
    int no, i, sum=0;
    printf("\n Eneter any No: ");
    scanf("%d",&no);
    //logic for perfect number
    for ( i = 1; i < no; i++)
    {
        if (no%i==0)
        {
            sum =sum + i;
        }
    }
    if(sum==no)
    {
        printf("\n %d is a Perfect Number",no);
    }
    else
    {
        printf("\n %d is Not a Perfect Number",no);
    }
    getch();
}