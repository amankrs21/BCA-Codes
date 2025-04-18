//program to multiply numbers by using array.
#include <stdio.h>
int main()
{
    int array[10];
    int i, n, multi=1;

    printf("\n Enter the total number to perform multiplcation: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf(" Enter the numbers to perform Multiplication: ");
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        multi = multi * array[i];
    }

    printf("\n Multiplication of the Given Numbers is: %d", multi);
    getch();
}
