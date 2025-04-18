//program to print maximum and minimum element from 2-D Array
#include<stdio.h>
void main()
{
    int array[10][10],row,col,max,min,i,j;
	printf("\n Enter the Size of Row: ");
    scanf("%d", &row);
    printf(" Enter the Size of Column : ");
    scanf("%d",&col);
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf(" Enter the Elements of Array: ");
            scanf("%d", &array[i][j]);
        }
    }
	max = array[0][0];  //assign first element of array
    min = array[0][0];
	for( i = 0; i < row; i++)
	{
        for ( j = 0; j < col; j++)
        {
            if(max < array[i][j])
		    {
			    max = array[i][j];
		    }
            if(min > array[i][j])
            {
                min = array[i][j];
            }
        }
	}
	printf("\n Maximum Element from Array is --> %d",max);
    printf("\n Minimum Element from Array is --> %d",min);
}