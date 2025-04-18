#include<stdio.h>

void main()
{
    char str1[100], str2[100];

    // input from user
    printf("\n Enter String : ");
    gets(str1);

    // strcpy() is used to copy one one string to another variable
    strcpy(str2,str1);

    printf("\n Copied String is -> %s\n",str2);

    return 0;
}
