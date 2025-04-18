// Program for Searching of array

#include<stdio.h>
void main()
{
    int array[10],limit,i,temp=1,search;
    
    printf("\n Enter Size : ");
    scanf("%d",&limit);

    for ( i = 0; i < limit; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Enter Element for Search : ");
    scanf("%d",&search);
    for ( i = 0; i < limit; i++)
    {
        if (search==array[i])
        {
            printf("\n %d is Found at Location -> %d\n",search,i+1);
            temp = 1;
            break;
        }
        else
        {
            temp = 0;
        }
    }
    if (temp==0)
    {
        printf("\n %d is Not Found\n",search);
    }
}
