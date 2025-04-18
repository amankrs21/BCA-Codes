//program to print natural numbers from 1to n.... Using while loop.
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("\n Enter the Limit of Natural Number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("\t%d", i);
        i++;
    }
    getch();
}