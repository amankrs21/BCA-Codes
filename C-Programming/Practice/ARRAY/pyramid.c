// program to pyramid
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rowno;
    printf("\n enter total no's of row : ");
    scanf("%d", &rowno);
    for(i=1;i<=rowno;i++)
    {
        for(j=1;j<=(2*rowno)-1;j++)
        {
            if(j>=rowno-(i-1) && j<=rowno+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}