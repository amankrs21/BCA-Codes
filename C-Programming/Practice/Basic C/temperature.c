//program to convert celsius into fahrenheit
#include<stdio.h>
float main()
{
    float cel,far;
    printf("\n Enter Celsius: ");
    scanf("%f",&cel);
    far = 1.8 * (cel) + 32;
    printf("\n %.2f celsius = %.2f fahrenheit",cel,far);
    getch();
}