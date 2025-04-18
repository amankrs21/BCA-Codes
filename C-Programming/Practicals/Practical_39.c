//program to print maximum and minimum value of 1-D array
#include<stdio.h>
void main()
{
    int array[20], count, i, max, min;
    printf("\n Number of Elements want to store in Array : ");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    max = array[0];
    for ( i = 0; i < count; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    printf("\n Maximum Element of Array is --> %d",max);
    min = array[0];
    for ( i = 0; i < count; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    printf("\n Minimum Element of Array is --> %d",min);
}