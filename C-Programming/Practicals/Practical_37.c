//program to add numbers by using array.
#include <stdio.h>
int main()
{
    int array[21];
    int i, n, sum = 0;
    printf("\n Enter the Size of Array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf(" Enter the Elements of Array: ");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    printf("\n Sum of all elements of array is: %d", sum);
    getch();
}
