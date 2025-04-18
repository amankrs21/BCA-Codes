// Program for Sorting Array using insertion sort

#include<stdio.h>

// function for sorting array using insertion sort
void insertion_sort(int a[], int s)
{
    for (int i = 1; i < s; i++)
    {
        int key = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

// Function for printing array
void array_print(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf(" %d, ",a[i]);
    }
    printf("\n");
}

// Driver Code
int main(int argc, char const *argv[])
{
    int size;
    printf("\n Enter Size of Array : ");
    scanf("%d",&size);
    printf("\n");

    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf(" Enter Elements : ");
        scanf("%d",&array[i]);
    }
    
    printf("\n Original Elements of Array are :- \n");
    array_print(array, size);

    insertion_sort(array, size);
    printf("\n After Soring Array, Elements are :- \n");
    array_print(array, size);
    return 0;
}
