//program to print array in Riverse Order
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int array[20], count, i;
    printf("\n Enter the Limit of Array : ");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    system("cls");

    printf("\n Original Array is : ");
    for ( i = 0; i < count; i++)
    {
        printf(" %d,",array[i]);
    }
    printf("\n Reverse of Array is : ");
    for ( i = count-1; i >= 0; i--)
    {
        printf(" %d,",array[i]);
    }
    getch();
}