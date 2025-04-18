#include<stdio.h>
main()
{
    int j;
    for (j=1; j<=100; ++j)
    {
        printf("\n%d", j);
    }
    for (j=100; j>=1; --j)
    {
        printf("\n%d", j);
    }
    getch();
}