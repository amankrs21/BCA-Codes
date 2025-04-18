//program to find cube and square of number using UDF
#include<stdio.h>
void cube(int n);
void square(int n);
void main()
{
    int num,ans;
    printf("\n Eneter any number to find: ");
    scanf("%d",&num);
    cube(num);
    square(num);
    ans=pow(num,5);
    printf("\n Power of 5 is : %d",ans);
    getch();
}
//defintiion of funtion
void cube(int n)
{
    printf("\n Cube is: %d",(n*n*n));
}
void square(int n)
{
    printf("\n Square is : %d",(n*n));
}