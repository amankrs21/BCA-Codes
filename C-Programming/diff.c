#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array[10], size, i, j, temp, s_max, s_min;
    printf("\n Enter Size of a Array : ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf(" Enter Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n Elements of the Array is -> ");
    for ( i = 0; i < size; i++)
    {
        printf("%d, ",array[i]);
    }
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    
    s_min = array[1];
    s_max = array[size-2];
    printf("\n Second Maximimum Element is -> %d",s_max);
    printf("\n Second Minimum Element is -> %d",s_min);
    
    printf("\n Difference Between Second Minimum and Maximum Element is -> %d\n",s_max-s_min);
    
    return 0;
}
