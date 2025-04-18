//program to find area of square,rectangle,triangle,circle,semicircle from UDF
//funtion type without return type without argument
#include<stdio.h>
#define pi 3.14
void traingle();       //prototype
void circle();
void rectangle();
void semicircle();
void square();

int main()
{
    int swi;
    printf("\n------------------------------------------------------\n");
    printf("             1. Area of Square \n");
    printf("             2. Area of Rectangle \n");
    printf("             3. Area of Triangle \n");
    printf("             4. Area of Circle \n");
    printf("             5. Area of Semi-Circle \n");
    printf("------------------------------------------------------");
    printf("\n Enter your Choice : ");
    scanf("%d",&swi);

    switch (swi)
    {
    case 1:
        square();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        traingle();
        break;
    case 4:
        circle();
        break;
    case 5:
        semicircle();
        break;
    default:
        printf("\n Enter the valid Input");
        break;
    }
   return 0;
}
//defintion of UDF
void square()
{
    float area,side;
    printf("\n Enter the Side : ");
    scanf("%f",&side);
    area = side * side;
    printf("\n Area of Square is --> %.2f ",area);
}
void rectangle()
{
    float area,length,breadth;
    printf("\n Enter the height : ");
    scanf("%f",&length);
    printf("\n Enter the base : ");
    scanf("%f",&breadth);
    area = 2 * length * breadth;
    printf("\n Area of triangle is --> %.2f ",area);
}
void traingle()
{
    float area,height,base;
    printf("\n Enter the height : ");
    scanf("%f",&height);
    printf("\n Enter the base : ");
    scanf("%f",&base);
    area = (0.5) * height * base;
    printf("\n Area of triangle is --> %.2f ",area);
}
void circle()
{
    float area,radius;
    printf("\n Enter the radius : ");
    scanf("%f",&radius);
    area = pi * (radius * radius);
    printf("\n Area of triangle is --> %.2f ",area);
}
void semicircle()
{
    float area,radius;
    printf("\n Enter the radius : ");
    scanf("%f",&radius);
    area = (pi * (radius * radius)) / 2;
    printf("\n Area of triangle is --> %.2f ",area);
}
