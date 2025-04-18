//program to calculate perimeter of a rectangle by taking input of length and breadth
#include<stdio.h>
int main()
{
    int length, breadth, perimeter;
    printf("\n Enter the length of Rectangle: ");
    scanf("%d",&length);
    printf("\n Enter the Breadth of Rectangle: ");
    scanf("%d",&breadth);
    perimeter = 2*(length+breadth);
    printf("\n Perimeter of Rectangle with length %d and bradth %d is --> %d",length,breadth,perimeter);
    getch(); 
}