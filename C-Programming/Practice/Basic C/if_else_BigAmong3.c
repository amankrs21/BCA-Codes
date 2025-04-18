/*for finding which number is biggest
  between given three numbers*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("\n Enter Number 1: ");
    scanf("%d",&a);
    printf("\n Enter Number 2: ");
    scanf("%d",&b);
    printf("\n Enter Number 3: ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("\n%d is the Biggest (Which is Number 1)", a);
    }
    else if(b>a && b>c)
    {
        printf("\n%d is the Biggest (Which is Number 2)", b);
    }
    else if(c>a && c>b)
    {
        printf("\n%d is the Biggest (Which is Number 3)", c);
    }
    else if(a=b=c)
    {
        printf("\n All the Numbers are equal(Number1=Number2=Number3)");
    }
    getch();
    return 0;
}
