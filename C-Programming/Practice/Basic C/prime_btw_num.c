//program to print prime numbers between 1 to n numbers
#include<stdio.h>
int main()
{
    int num,i,j,prime=0;
    printf("\n Enter limit to find Prime Number : ");
    scanf("%d",&num);
    printf("\n Prime Numbers between 1 to %d is -->",num);
    for ( i = 1; i < num; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 1;
                break;
            }
            else
            {
                prime = 0;
            }
        }
        if (prime == 0)
        {
            printf("\t%d",i);
        }
    }
    getch();
}