#include<stdio.h>
#define pi 3.14
int circle();
int main()
{
    circle();   //calling of funtion in the main funtion
    getch();
}
//defintion of funtion
int circle()
{
    float circle, radius;
    printf("\n Enter the Radius of the Circle : ");
    scanf("%f",&radius);
    circle = (radius * radius)*pi;
    printf("\n Area of the circle with radius %.2f --> %.2f",radius,circle);
}