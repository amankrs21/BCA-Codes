#include<stdio.h>

void print(int *a, int s){
    for (int i = 0; i < s; i++)
    {
        printf(" %d, ",a[i]);
    }
    printf("\n");
}

// Sorting Array By Bubble Sort
void bubble(int *a, int s)
{
    for (int i = 0; i < s-1; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    print(a, s);
}

// Sorting Array By Selection Method
void selection(int *a, int s){
    int min, temp;
    for (int i = 0; i < s; i++)
    {
        min = i;
        for (int j = i+1; j < s; j++)
        {
            if(a[min] > a[j]){
                min = j;
            }
        }
        if(min != i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    print(a, s);
}

int main(int argc, char const *argv[])
{
    int size;
    printf("\n Enter Size of Array : ");
    scanf("%d",&size);

    int array[size];
    printf("\n");
    
    for (int i = 0; i < size; i++)
    {
        printf(" Enter Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Elements of array are :- \n");
    print(array, size);

    printf("\n After Sorting Array by Bubble Sort :- \n");
    bubble(array, size);

    printf("\n After Sorting of Array By Selection Method :- \n");
    selection(array, size);

    return 0;
}
