//program to print alphabets from a to z.
#include<stdio.h>
int main()
{
    char alpha;
    printf("\n Alphabets is : \n");
    alpha = 'a';
    while (alpha <= 'z')
    {
        printf("%c\t",alpha);
        alpha++;
    }
    getch();
}