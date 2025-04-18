//program to perform searching operation on 2D array
#include<stdio.h>
void main()
{
    int array[3][3],i,j,search,flag=1;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" Enter Elements : ");
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n Enter Element for Search : ");
    scanf("%d",&search);
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (search == array[i][j])
            {
                printf("\n %d is Found at %d %d",search,i+1,j+1);
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("\n %d is not Found",search);
    }
}