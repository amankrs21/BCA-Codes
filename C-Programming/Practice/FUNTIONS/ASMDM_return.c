//program which shows funtion with return type whitout argument.
//to perform Arithmetic Progression.
#include<stdio.h>
int add();
int sub();
int multi();
int div();
int modulo();
int main()
{
    int ans;

    ans = add();    //calling of user defined funtion in main funtion
    printf(" Addition Of the two Numbers is : %d",ans);
    ans = sub();    //calling of user defined funtion in main funtion
    printf(" Substraction Of the two Numbers is : %d",ans);
    ans = multi();  //calling of user defined funtion in main funtion
    printf(" Multiplication Of the two Numbers is : %d",ans);
    ans = div();    //calling of user defined funtion in main funtion
    printf(" Division Of the two Numbers is : %d",ans);
    ans = modulo();   //calling of user defined funtion in main funtion
    printf(" Modulo Of the two Numbers is : %d",ans);
    getch();
}
//defintion of funtion
int add()
{
    int num1,num2;
    printf("\n\n Enter Number 1 for Addition : ");
    scanf("%d",&num1);
    printf(" Enter Number 2 for Addition : ");
    scanf("%d",&num2);
    // int ans;
    // ans = a+b;
    // return ans;
    return num1+num2;
}
int sub()
{
    int num1,num2;
    printf("\n\n Enter Number 1 for Substraction : ");
    scanf("%d",&num1);
    printf(" Enter Number 2 for Substraction : ");
    scanf("%d",&num2);
    return num1-num2;
}
int multi()
{
    int num1,num2;
    printf("\n\n Enter Number 1 for Multiplication : ");
    scanf("%d",&num1);
    printf(" Enter Number 2 for Multiplication : ");
    scanf("%d",&num2);
    return num1*num2;
}
int div()
{
    int num1,num2;
    printf("\n\n Enter Number 1 for Division : ");
    scanf("%d",&num1);
    printf(" Enter Number 2 for Division : ");
    scanf("%d",&num2);
    return num1/num2;
}
int modulo()
{
    int num1,num2;
    printf("\n\n Enter Number 1 for Modulo : ");
    scanf("%d",&num1);
    printf(" Enter Number 2 for Modulo : ");
    scanf("%d",&num2);
    int ans;
    ans = num1%num2;
    return ans;
    //return num1%num2;
}