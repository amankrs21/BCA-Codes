//Write a program to find area and perimeter of Rectangle.


#include <stdio.h>
main()
{
    float length,breadth,area,perimeter;
    printf("\n----------------------------------------------------------");
    printf("\n      TO CALCULATE AREA & PERIMETER OF RECTANGLE\n ");
    printf("\n  Enter Length of the Rectangle : ");
    scanf("%f", &length);
    printf("\n Enter Breadth of the Rectangle : ");
    scanf("%f", &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("\n        Area of the Rectangle is: %.2f sq-unit",area);
    printf("\n   Perimeter of the Rectangle is: %.2f unit",perimeter);
    printf("\n----------------------------------------------------------");
    getch();
}
