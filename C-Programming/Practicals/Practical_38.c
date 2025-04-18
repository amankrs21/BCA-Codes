//program to sorting 1-D array
#include<stdio.h>
void main()
{
    int array[10], i, j, temp;
    for ( i = 0; i < 10; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Original Array is : ");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d,",array[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;                
            }
        }
    }
    printf("\n Ascending Order is : ");
    for ( i = 0; i < 10; i++)
    {
        printf(" %d,",array[i]);
    }
}