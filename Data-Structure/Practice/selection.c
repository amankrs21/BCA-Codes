#include<stdio.h>

void display(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf(" %d, ",a[i]);
    }
}