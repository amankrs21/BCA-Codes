//program to print numbers in reverse order
#include <stdio.h>
int main()
{
    int num, n, rem, sum = 0;
    printf("\n Enter any Number: ");
    scanf("%d", &num);
    n = num;
    //logic for reverse the number
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = rem + (sum * 10);
    }
    printf("\n Reverse Number of %d is ---> %d", n, sum);
    getch();
}
