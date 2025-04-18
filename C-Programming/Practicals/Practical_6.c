//Write a program to print ASCII value of entered character and Character for entered
//ASCII value between 0-127
#include<stdio.h>
main()
{
    char c;
    printf("\n Enter any Character: ");
    scanf("%c",&c);
    printf("\n ASCII value for %c is %d", c,c);
    getch();
}
