// Program to print largest element from the element

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int array[20], limit, i, j, lar, temp=0;

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
    
    lar = array[0];
    for ( i = 0; i < limit; i++)
    {
        if (lar < array[i])
        {
            lar = array[i];
        }
    }

    printf("\n\n Largest element from the Array is -> %d\n",lar);       
    
    return 0;
}
