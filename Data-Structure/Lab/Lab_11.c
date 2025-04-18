// Program to Sort array by using Quick Sort

#include<stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int h = a[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (a[j] < h)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return (i+1);
}

void quick_sort(int a[], int low, int high)
{
    if(low < high)
    {
        // pi mean partiotion index
        int pi = partition(a, low, high);

        // Seperately sort elements before partion and after partition
        quick_sort(a, low, pi-1);
        quick_sort(a, pi+1, high);
    }
}

// Funtion to print array
void array_print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d, ",a[i]);
    }
    printf("\n");
}

// Driver Code
void main()
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
    
    printf("\n Original Elements of Array : \n");
    array_print(array, size);

    quick_sort(array, 0, size-1);

    printf("\n After Sorting Array :- \n");
    array_print(array, size);
}
