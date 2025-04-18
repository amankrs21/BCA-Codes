//program to check number is Prime or Not.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int no, i, flag=0;
    printf("\n Enter any Number: ");
    scanf("%d",&no);
    //logic
    for ( i = 2; i < no; i++)
    {
        if (no%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("\n %d is Not Prime",no);
    }
    else
    {
        printf("\n %d is Prime",no);
    }
    getch();
}