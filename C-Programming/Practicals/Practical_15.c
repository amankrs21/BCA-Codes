// Write a program to find if the number is positive or not.


#include<stdio.h>
main()
{
    int num;
    printf("\n Enter any Number: ");
    scanf("%d",&num);
    if( num > 0 )
    {
        printf("\n %d is a Positive Number",num);
    }
    else if( num < 0)
    {
        printf("\n %d is a Negetive Number",num);
    }
    else
    {
        printf("\n %d is a Void Number",num);
    }
    getch();
}
