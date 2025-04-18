//Write a program to find area and perimeter of Triangle.


#include<stdio.h>
#define half 0.5
main()
{
    float area,perimeter,height,base,a,b,c;
    printf("\n------------------------------------------");
    printf("\n Enter the Base of the Triangle: ");
    scanf("%f", &base);
    printf(" Enter the Height of the Triangle: ");
    scanf("%f", &height);
    area=(base*height)*half;
    printf("\n Area of Rectangle: %.2f sq-unit",area);
    printf("\n------------------------------------------");
    printf("\n------------------------------------------");
    printf("\n Enter value of Sides A, B, and C: ");
    scanf("%f %f %f",&a,&b,&c);
    perimeter=a+b+c;
    printf(" Perimeterof the Triangle is: %.2f unit",perimeter);
    printf("\n------------------------------------------");
    getch();
}






