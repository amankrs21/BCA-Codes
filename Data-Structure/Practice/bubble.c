#include<stdio.h>

void main()
{
    int array[100], size, i, j, temp;
    printf("\n Enter Size of the Array : ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        printf(" Enter Elements : ");
        scanf("%d",&array[i]);
    }
    
    printf("\n Elements of Array :- ");
    for ( i = 0; i < size; i++)
    {
        printf("%d, ",array[i]);
    }

    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("\n After Sorting Array :- ");
    for ( i = 0; i < size; i++)
    {
        printf("%d, ",array[i]);
    }
}
