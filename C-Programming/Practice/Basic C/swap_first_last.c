//program to swap first and Last digit of a Number
#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int num,last,first,count,temp,new;
    printf("\n Enter any Integer Number : ");
    scanf("%llu",&num);
    printf("\n Original Input is --> %llu",num);
    count = (unsigned long long int)log10(num);
    printf("\n Number of Digits is : %llu",count);
    first = num / (unsigned long long int)pow(10,count);
    last = num % 10;
    temp = last * (unsigned long long int)pow(10,count);
    temp = temp + (num % (unsigned long long int)pow(10,count));
    temp = temp - last;
    temp = temp + first;
    printf("\n First Number is %llu \n last Number is %llu",first,last);
    printf("\n Number after swapping is --> %llu",temp);
    getch();
}