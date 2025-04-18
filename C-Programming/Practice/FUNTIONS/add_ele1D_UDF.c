//program to find addition of array element using UDF
#include<stdio.h>
int addition(int num[]);   //prototype //here size of array is optional
int main()
{
    int arr[10],i;
    for ( i = 0; i < 10; i++)
    {
        printf(" Enter elements: ");
        scanf("%d",&arr[i]);
    }
    addition(arr);
    getch();
}
int addition(int n[])
{
    int i, sum=0;
    //static int sum;
    for ( i = 0; i < 10; i++)
    {
        sum = sum + n[i];
    }
    printf("\n Addition is : %d",sum);
}