// Write a program to find sum of all natural numbers using loop (also use while loop, for
// loop and do while loop).

#include <stdio.h>
main()
{
    int i, x, y = 0;
    printf("\n Enter any Number: ");
    scanf("%d", &x);
    for (i = 1; i <= x; ++i)
    {
        y += i;
    }
    printf("\n Sum of the given input= %d", y);
    getch();
}
