//Write a Program to SWAP value of two variable using temp variable.



//here we just swap the value of a in the b by using a extra variable temp.
#include<stdio.h>
main()
{
    int a, b, temp;
    printf("\n Enter value for number a and b: ");
    scanf("%d %d",&a,&b);
    printf("\n Value of a and b is: %d and %d",a,b);
    temp=a;         //temp is just a extra variable that help to interchange the values of a and b.
    a=b;            //here a is assign as the value of b.
    b=temp;         //here b is assign as temp value and I know temp is nothing just the value of a.
    printf("\n \n Updated value of a and b is: %d and %d",a,b);
    getch();
}