// Write a menu-driven program using Switch case to calculate the following Area of
// circle, Square,Triangle, Rectangle, Semicircle


#include<stdio.h>
#define pi 3.14
#define half 0.5
main()
{
    float circle,semicircle,rectangle,triangle,square,radius,length,breadth,base,height,side;
    int shape;
    printf("\n-----------------------------------------------");
    printf("\n     List of Operations to Calculate Area      ");
    printf("\n-----------------------------------------------");
    printf("\n       For Circle             press 1");
    printf("\n       For Semicircle         press 2");
    printf("\n       For Rectangle          press 3");
    printf("\n       For Triangle           press 4");
    printf("\n       For Square             press 5");
    printf("\n-----------------------------------------------");
    printf("\nSelect your choice from the given operations: ");
    scanf("%d", &shape);
    printf("-----------------------------------------------");
    switch(shape)
    {
        case 1:
            printf("\n Enter the radius of the Circle: ");
            scanf("%f",&radius);
            circle= pi*(radius*radius);
            printf("\n Area of Circle is: %.2f sq unit",circle);
            break;
        case 2:
            printf("\n Enter the radius of the Semicircle: ");
            scanf("%f",&radius);
            semicircle=pi*(radius*radius)*half;
            printf("\n Area of Semicircle is: %.2f sq unit",semicircle);
            break;
        case 3:
            printf("\n Enter the Length of Rectangle: ");
            scanf("%f",&length);
            printf("\n Enter the Bradth of Rectangle: ");
            scanf("%f",&breadth);
            rectangle=2*(length+breadth);
            printf("\n Area of Recatngle is: %.2f sq unit",rectangle);
            break;
        case 4:
            printf("\n Enter the Base of Triangle: ");
            scanf("%f",&base);
            printf("\n Enter the Height of Triangle: ");
            scanf("%f",&height);
            triangle=half*(base*height);
            printf("\n Area of Triangle is: %.2f sq unit",triangle);
            break;
        case 5:
            printf("\n Enter the Side of Sqaure: ");
            scanf("%f",&side);
            square=side*side;
            printf("\n Area of Square is: %.2f",square);
            break;
        default :
            printf("Please Enter Valid Input");
            break;
    }
    printf("\n-----------------------------------------------");
    getch();
}
