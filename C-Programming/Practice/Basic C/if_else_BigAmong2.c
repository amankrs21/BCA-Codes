//for finding which number is biggest
//between two number

#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, big;
    printf("\n Enter Number 1: ");
    scanf("%d",&a);
    printf("\n Enter Number 2: ");
    scanf("%d",&b);
    if(a>b)
        big=a;
    else
        big=b;
    printf("\n Biggest number is: %d", big);
    getch();
    return 0;
}
