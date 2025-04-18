// Program to print smallest element from the element

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int array[20], limit, i, j, small, temp=0;

    printf("\n Enter Limit to add Elements in Array : ");
    scanf("%d",&limit);

    for ( i = 0; i < limit; i++)
    {
        printf(" Enter Element : ");
        scanf("%d",&array[i]);
    }

    printf("\n Elements of Array are -> ");
    for ( i = 0; i < limit; i++)
    {
        printf(" %d,",array[i]);
    }
    
    small = array[0];
    for ( i = 0; i < limit; i++)
    {
        if (small > array[i])
        {
            small = array[i];
        }
    }

    printf("\n\n Smallest element from the Array is -> %d\n",small);       
    
    return 0;
}
