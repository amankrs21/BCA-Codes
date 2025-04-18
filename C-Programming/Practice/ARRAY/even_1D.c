//program to print even numbers from the group of numbers by using array.
#include <stdio.h>
int main()
{
    int even[20], i, x;

    printf("\n Enter the total No's of Elements: ");
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        printf(" Enter the elements: ");
        scanf("%d", &even[i]);
    }

    printf("\n Your Inputs is: \t");
    for (i = 0; i < x; i++)
    {
       printf(" %d,", even[i]);
    }
    
    printf("\n\n EVEN numbers from your input is: ");
    for (i = 0; i < x; i++)
    {
        if (even[i] % 2 == 0)
        {
            printf(" %d,", even[i]);
        }
    }

    printf("\n\n please press any key to exit from this program...");
    getch();
}
