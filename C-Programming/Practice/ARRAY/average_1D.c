//in this program we can calculate average of numbers.
#include <stdio.h>
int main()
{
    int array[15], i, a, sum = 0;
    int average;
    printf("\n Enter the numbers of element to find Average: ");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        printf(" Enter the elements: ");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < a; i++)
    {
        sum = sum + array[i];
    }
    average = sum / a;
    printf("\n \t Average: %d", average);
    printf("\n\npress any key to exist from this program...");
    getch();
}
