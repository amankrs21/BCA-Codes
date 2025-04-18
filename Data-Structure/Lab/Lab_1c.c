// Program to perform reverse element of Array

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

    // first Logic
    printf("\n Array in Reverse Form -> ");
    for ( i = limit-1; i >= 0; i--)
    {
        printf(" %d,",array[i]);
    }

    // // Second Logic
    // for ( i = 0; i < limit; i++)
    // {
    //     for ( j = i+1; j < limit; j++)
    //     {
    //         temp = array[j];
    //         array[j] = array[i];
    //         array[i] = temp;
    //     }
        
    // }
    // printf("\n Array in Reverse Form -> ");
    // for ( i = 0; i < limit; i++)
    // {
    //     printf(" %d,",array[i]);
    // }
    
    // // third logic
    // i = 0;
    // j = limit - 1;
    // while (i < j)
    // {
    //     temp = array[i];
    //     array[i] = array[j];
    //     array[j] = temp;
    //     i++;
    //     // j++;
    // }
    // printf("\n Array in Reverse Form -> ");
    // for ( i = 0; i < limit; i++)
    // {
    //     printf(" %d,",array[i]);
    // }
    
    return 0;
}
