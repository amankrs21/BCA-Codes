//program which shows funtion with return type with argument.
//to perform Arithmetic Progression.
#include <stdio.h>
int add(int m, int n);    //prtotype
int sub(int m, int n);    //prtotype
int multi(int m, int n);  //prtotype
int div(int m, int n);    //prtotype
int modulo(int m, int n); //prtotype
int main()
{
    int num1, num2, ans;

    printf("\n\n Enter Number 1 & Number 2 for Addition: \n");
    scanf("%d%d", &num1, &num2);
    ans = add(num1, num2); //calling of funtion in Min Funtion
    printf(" Addition --> %d", ans);

    printf("\n\n Enter Number 1 & Number 2 for Substraction: \n");
    scanf("%d%d", &num1, &num2);
    ans = sub(num1, num2); //calling of funtion in Min Funtion
    printf(" Substraction --> %d", ans);

    printf("\n\n Enter Number 1 & Number 2 for Multiplication: \n");
    scanf("%d%d", &num1, &num2);
    ans = multi(num1, num2); //calling of funtion in Min Funtion
    printf(" Multiplication --> %d", ans);

    printf("\n\n Enter Number 1 & Number 2 for Division: \n");
    scanf("%d%d", &num1, &num2);
    ans = div(num1, num2); //calling of funtion in Min Funtion
    printf(" Division --> %d", ans);

    printf("\n\n Enter Number 1 & Number 2 for Modulo: \n");
    scanf("%d%d", &num1, &num2);
    ans = modulo(num1, num2); //calling of funtion in Min Funtion
    printf(" Modulo --> %d", ans);

    return 0;
}
//defintion of funtion
int add(int x, int y)
{
    // int ans;
    // ans = x+y;
    // return ans;
    return x + y;
}
//defintion of funtion
int sub(int x, int y)
{
    return x - y;
}
//defintion of funtion
int multi(int x, int y)
{
    return x * y;
}
//defintion of funtion
int div(int x, int y)
{
    return x / y;
}
//defintion of funtion
int modulo(int x, int y)
{
    int ans;
    ans = x % y;
    return ans;
    //return num1%num2;
}