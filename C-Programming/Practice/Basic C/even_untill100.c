//program to print even number between the inputs
#include<stdio.h>
int main()
{
    int i;
    printf("\n Even Numbers between 1 to 100 is : \n");
    i = 2;
    while (i <= 100)
    {
        printf("%d\t",i);
        i = i+2;
    }
    getch();
}