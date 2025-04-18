// program to add elements of array

#include<stdio.h>
void main()
{
    int array[10],limit,i,temp=1,sum=0;
    
    printf("\n Enter Size : ");
    scanf("%d",&limit);
    
    for ( i = 0; i < limit; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 1+limit; i++)
    {
        sum = sum + array[i];
    }
    printf("\n Addtion of All the Elements of Array is -> %d\n",sum);
}
