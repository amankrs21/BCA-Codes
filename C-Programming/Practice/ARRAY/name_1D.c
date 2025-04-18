//in this program we can print the names of any person(gets used insted of scanf and puts used insted of printf)
#include <stdio.h>
int main()
{
    char name[15];
    printf("Please Enter your Name: ");
    gets(name);         //gets is used to read white space as a character
    printf("\nYour Name is: ");
    puts(name);         //puts read and print white space as a character
    getch();
}