// Write program to print ASCII table for upper case and lower case using loop.



#include<stdio.h>
main()
{
    int c;
    printf("\n ASCII value for Upper Case\n\n\t");
    for(c=65;c<=90;c++)
    {
        printf("\t\t %d --> %c",c,c);
    }
    printf("\n\n ASCII value for Lower Case\n\n\t");
    for(c=97;c<=122;c++)
    {
        printf("\t\t %d--> %c",c,c);
    }
    getch();
}
