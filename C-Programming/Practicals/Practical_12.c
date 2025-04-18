// Write a program to find area and perimeter/circumference of Circle.

#include<stdio.h>
main()
{
    float radius, circumference, area;
    printf("\n Enter the Radius of the Circle: ");
    scanf("%f", &radius);
    circumference=(2*3.14)*radius;
    area=(radius*radius)*3.14;
    printf("\n Circumference of the Circle is: %.2f unit", circumference);
    printf("\n\n and Area of the Circle is: %.2f sq-unit", area);
    getch ();
}
