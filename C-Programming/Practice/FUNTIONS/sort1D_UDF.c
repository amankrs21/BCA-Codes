//program to sort 1D Array by using UDF
#include<stdio.h>
void sort();
void main()
{
	sort();
}
void sort()
{
	int arr1[10],i,j,temp;
	for(i=0;i<10;i++)
	{
		printf("\n enter element for array : ");
		scanf("%d",&arr1[i]);
	}
	printf("\n original array is : \n");
	for(i=0;i<10;i++)
	{
		printf("\t %d",arr1[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[j];
				arr1[j]=arr1[i];
				arr1[i]=temp;
			}
		}
	}
	printf("\n sorted array is : \n");
	for(i=0;i<10;i++)
	{
		printf("\t %d",arr1[i]);
	}
}