// program to sorting array (i'm doing it in Assending Order)

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[20], limit, i, j, temp;
    printf("\n Enter the LIMIT of Array : ");
    scanf("%d",&limit);

    for ( i = 0; i < limit; i++)
    {
        printf(" Enter Element : ");
        scanf("%d",&array[i]);
    }

    printf("\n Original Array is -> ");
    for ( i = 0; i < limit; i++)
    {
        printf(" %d,",array[i]);
    }

    for ( i = 0; i < limit; i++)
    {
        for ( j = i+1; j < limit; j++)
        {
            if (array[i] > array[j])
            {
                // logic number 1
                // (array[i] ^= array[j]), (array[j] ^= array[i]), (array[i] ^= array[j]);

                // logic by swapping using third varible
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
        
    }

    printf("\n Elements is Ascending Order is -> ");
    for ( i = 0; i < limit; i++)
    {
        printf(" %d,",array[i]);
    }
    
    
    return 0;
}
