// Write a program to find roots of quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,det,root1,root2;  
    printf("\n Quadratic Equation is of the form: ax^2 + bx + c = 0");
    printf("\n Enter the Coefficient of a: ");
    scanf("%f",&a);
    printf(" Enter the Coefficient of b: ");
    scanf("%f",&b);
    printf(" Enter the Coefficient of c: ");
    scanf("%f",&c);

    det = sqrt(b*b -4*a*c);
    d = 2 * a;

    root1 = ((-b) + det) / d;
    root2 = ((-b) - det) / d;

    printf("\n Root 1 is: %.2f", root1);
    printf("\n Root 2 is: %.2f", root2);
    getchar();
    printf("\n\n\n press ENTER to exit...  ");
    getchar();
    return 0;
}
