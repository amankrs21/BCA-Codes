//program to print even numbers from the group of numbers by using array.
#include<stdio.h>
int main()
{
    int odd[20], i, y;
    printf("\n Enter the total No's of Elements: ");
    scanf("%d",&y);

    for ( i = 0; i < y; i++)
    {
        printf(" Enter the Numbers: ");
        scanf("%d",&odd[i]);
    }
    
    printf("\n ODD No's from your Input: ");
    for ( i = 0; i < y; i++)
    {
        if (odd[i] % 2 == 1)
        {
            printf(" %d,",odd[i]);
        }
    }
    
    printf("\n\npress any key to exit from this program...");
    getch();
}