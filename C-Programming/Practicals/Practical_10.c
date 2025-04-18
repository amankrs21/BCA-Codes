//Write a Program to find area and perimeter of Square.

#include<stdio.h>
main()
{
    float side, area,perimeter;
    printf("\n Enter the Radius of the Circle: ");
    scanf("%f", &side);
    area=(side*side);
    perimeter=(4*side);
    printf("\n Area of the Square is: %.2f sq-unit \n and Perimeter of the Circle is: %2.f",area,perimeter);
    getch ();
}
