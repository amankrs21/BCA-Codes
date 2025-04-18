//program to calculate square and cube of a Number using UDF

#include<stdio.h>
void square(int m);
void cube(int n);

int main()
{
    int num;
    printf("\n Enter a Number to find its Sqaure and Cube : ");
    scanf("%d",&num);
    square(num);
    cube(num);

    return 0;
}
//deintion of UDF
void square(int m)
{
    printf("\n Square of %d is --> %d",m,m*m);
}
void cube(int n)
{
    printf("\n Cube of %d is --> %d",n,n*n*n);
}