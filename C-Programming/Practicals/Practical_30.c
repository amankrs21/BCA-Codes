//program to check list pf prime number within given interval
#include<stdio.h>
int main()
{
    int no, i,j, flag=0;
    printf("\n Enter Number for Interval: ");
    scanf("%d",&no);
    //logic
    for ( i = 1; i < no; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if (flag==0)
        {
            printf("\t %d",i);
        }
    }
    getch();
}
