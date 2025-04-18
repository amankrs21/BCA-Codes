//program to convert centimeter into meter and kilo meter
#include<stdio.h>
float main()
{
    float cm,m,km;
    printf("\n Enter any Value in centimeter: ");
    scanf("%f",&cm);
    m = cm / 100;
    km = cm / 10000;
    printf("\n %.2f centimeter --> %.3f meter",cm,m);
    printf("\n %.2f centimeter --> %.3f kilometer",cm,km);
    getch();
}