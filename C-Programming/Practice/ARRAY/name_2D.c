//program to print names using 2-D array (and using String)
#include<stdio.h>
char main()
{
    char c[10][30];
    int i,no;
    // printf("\n Enter no. of Names you want to Print: ");
    // scanf("%d",&no);
    for ( i = 0; i < 5; i++)
    {
        printf(" Enter Names: ");
        gets(c[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\n\t");
        puts(c[i]);       //we can use both puts or (printf with %s)
        // printf("\n %s",c[i]);
    }
    getch();
}