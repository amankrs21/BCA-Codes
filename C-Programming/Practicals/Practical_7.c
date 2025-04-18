//Write a Program to find quotient and remainder using (/ and %).
#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    printf("\n------------------------------------------");
    printf("\n      Enter Divident: ");
    scanf("%d", &dividend);
    printf("       Enter Divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("\n         Quotient is: %d", quotient);
    printf("\n        Remainder is: %d", remainder);
    printf("\n------------------------------------------\n");
    return 0;
}
