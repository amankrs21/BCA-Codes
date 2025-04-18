// Write a Program to SWAP value of two variable without using temp variable.



//here in this program we interchange the value of a into b and b into a.
#include<stdio.h>
main()
{
    int a, b;
    printf("\n Enter value for Variable 'a' and 'b': ");
    scanf("%d %d", &a, &b);
    printf("\n Value of 'a' is %d and 'b' is %d", a, b);
    a=a+b;      //value of a is asigned as the sum of a and b
    b=a-b;      //value of b is assigned as new value of a minus b
    a=a-b;      //here both the values are interchanged if you calculate.
    printf("\n Updated Value of 'a'---> %d and 'b'---> %d", a, b);
    getch();
}
