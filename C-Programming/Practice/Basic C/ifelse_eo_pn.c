// here in this program we can fine both the number is even/odd and positive/negetive or void
//for this we use nested if else operator
#include<stdio.h>
int main()
{
    int num1;
    printf("\n Enter any number : ");
    scanf("%d",&num1);
    if ((num1/2) == 0)
    {
        printf("\n %d is Even Number",num1);
        if (num1 > 0)
        {
            printf("\n also %d is also Positive Number",num1);
        }
        else if (num1 < 0)
        {
            printf("\n also %d is also Negetive Number",num1);
        }
        else
        {
            printf("\n and %d is also Null/Void Number",num1);
        }
    }
    else
    {
        printf("\n %d is Odd Number",num1);
        if (num1 > 0)
        {
            printf("\n and %d is also Positive Number",num1);
        }
        else if (num1 < 0)
        {
            printf("\n and %d is also Negetive Number",num1);
        }
        else
        {
            printf("\n and %d is a Null/Void Number",num1);
        } 
    }
    getch();
}
