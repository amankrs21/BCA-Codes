// Program for Bubble Sort in Array using UDF

#include<stdio.h>

void print_array(int *array, int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf(" %d, ",array[i]);
    }
    printf("\n");
}

void bubble_sort(int *array, int size)
{
    int temp, i, j;
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
    print_array(array, size);
}

int main(int argc, char const *argv[])
{
    int size, i;
    printf("\n Enter Size of the Array : ");
    scanf("%d",&size);

    int array[size];
    for ( i = 0; i < size; i++)
    {
        printf(" Enter Element of Array : ");
        scanf("%d",&array[i]);
    }
    
    printf("\n Original Array is :- \n");
    print_array(array, size);

    printf("\n After Sorting Array :- \n");
    bubble_sort(array, size);

    return 0;
}
