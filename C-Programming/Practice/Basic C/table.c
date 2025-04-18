//program to print table of any number.
#include<stdio.h>
int main()
{
    int i,num;
    printf("\n Enter any Number to print its Table : ");
    scanf("%d",&num);
    // for ( i = 1; i <= 10; i++)
    // {
    //     printf("\n   %d   *   %d   =  %d",num,i,num*i);
    // }
    // i =  1;
    // while (i < 11)
    // {
    //     printf("\n   %d   *   %d   =  %d",num,i,num*i);
    //     i++;
    // }
    // i =  1;
    do
    {
        printf("\n   %d   *   %d   =  %d",num,i,num*i);
        i++;
    } while ( i <= 10);
    
    getch();
}