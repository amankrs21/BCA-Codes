#include <stdio.h>
void max_2D_array(int mat[3][3]);
int main()
{
	int c, d, matrix[3][3];
	for (c = 0; c < 3; c++)
    {
		for(d = 0; d < 3; d++)
	    {
			printf(" Enter the elements of the matrix : ");
			scanf("%d", &matrix[c][d]);
	    }
    }
	max_2D_array(matrix);
    getchar();
    printf("\n\n\n press ENTER to exit...  ");
    getchar();
}
void max_2D_array(int mat[3][3])
{
	int c, d, max;
	max = mat[0][0];
	for (c = 0; c < 3; c++)
	{
		for (d = 0; d < 3; d++)
		{
			if (mat[c][d] > max)
			{
				max = mat[c][d];
			}
		}
	}
    printf("\n Maximum element in the matrix is --> %d\n",max);
}