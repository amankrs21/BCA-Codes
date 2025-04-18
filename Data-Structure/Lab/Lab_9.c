// Program for Selection sort

#include<stdio.h>

void display(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf(" %d, ",a[i]);
    }
}

void selection(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        int min = i;
        for (int j = i+1; j < s; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    display(a, s);
}

int main(int argc, char const *argv[])
{
    int size;
    printf("\n Enter Size of Array : ");
    scanf("%d",&size);
    printf("\n");
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf(" Enter Elements of Array : ");
        scanf("%d",&array[i]);
    }
    
    printf("\n Original Array is : \n");
    display(array, size);

    printf("\n After Sorting of Array by Selection Method : \n");
    selection(array, size);
    printf("\n");
    return 0;
}