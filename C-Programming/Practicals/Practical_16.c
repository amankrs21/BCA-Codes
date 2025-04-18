// Write a program to check if the number is odd or even.



#include<stdio.h>
main()
{
    int num;
    printf("\n Enter any Number: ");
    scanf("%d",&num);
    if((num%2) == 0)
    {
        printf("\n %d is an Even Number",num);
    }
    else
    {
        printf("\n %d is a Odd Number",num);
    }
    getch();
}
