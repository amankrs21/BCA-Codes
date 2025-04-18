//program to print natual number in reverse form
#include<stdio.h>
int main()
{
    int i,num;
    printf("\n Enter limit of Natural Number : ");
    scanf("%d",&num);
    i = num;
    while (i >= 1)
    {
        printf("%d\t",i);
        i--;
    }
    getch();
}