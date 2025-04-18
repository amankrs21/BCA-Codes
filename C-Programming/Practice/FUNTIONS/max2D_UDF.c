#include <stdio.h>
void max_2D_array(int mat[10][10]);
int main()
{
	int a, b, c, d, matrix[10][10];
	printf("\n Enter the Number of Rows : ");
	scanf("%d",&a);
	printf(" Enter the Number of Columns : ");
	scanf("%d",&b);
	for (c = 0; c < a; c++)
    {
		for(d = 0; d < b; d++)
	    {
			printf(" Enter the elements of the matrix : ");
			scanf("%d", &matrix[c][d]);
	    }
    }
	max_2D_array(matrix);
}
void max_2D_array(int mat[10][10])
{
	int a, b, c, d, max;
	max = mat[0][0];
	for (c = 0; c < a; c++)
	{
		for (d = 0; d < b; d++)
		{
			if (mat[c][d] > max)
			{
				max = mat[c][d];
			}
		}
	}
    printf("\n Maximum element in the matrix is --> %d",max);
}