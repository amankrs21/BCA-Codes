/* program to perform a search operation on 1D array print index value if element
is found else print proper message if element is not found*/
#include<stdio.h>
void main()
{
    int array[10],i,temp=1,search;
    for ( i = 0; i < 10; i++)
    {
        printf(" Enter the Elements : ");
        scanf("%d",&array[i]);
    }
    printf("\n Enter Element for Search : ");
    scanf("%d",&search);
    for ( i = 0; i < 10; i++)
    {
        if (search==array[i])
        {
            printf("\n %d is Fond at Location --> %d",search,i+1);
            temp = 1;
            break;
        }
        else
        {
            temp == 0;
        }
    }
    if (temp==0)
    {
        printf("\n %d is Not Found",search);
    }
}