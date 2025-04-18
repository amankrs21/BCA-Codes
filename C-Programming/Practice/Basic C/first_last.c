//program to print first and last digit of a number.
#include<stdio.h>
#include<math.h>
int main()
{
    int num,first,last,count;
    printf("\n Enter any Number : ");
    scanf("%d",&num);
    count = log10(num);     //it counts the no. of digits present in the input
    first = num / pow(10,count);
    last = num % 10;
    printf("\n First Number is : %d \n Last Number is : %d",first,last);
    getch();
}