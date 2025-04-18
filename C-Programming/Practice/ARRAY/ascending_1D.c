//program to sorting array elements in asscending order.
#include <stdio.h>
int main()
{
    int asce[20], i, j, temp, a;
    printf("\n Enter the total No's of Elements: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        printf(" Enter the Numbers: ");
        scanf("%d", &asce[i]);
    }

    printf("\n Original form of Elements is: ");
    for (i = 0; i < a; i++)
    {
        printf(" %d,", asce[i]);
    }

    for (i = 0; i < a; i++)
    {
        for (j = i+1; j < a; j++)
        {
            if (asce[i] > asce[j])
            {
                temp = asce[j];
                asce[j] = asce[i];
                asce[i] = temp;
            }
        }
    }

    printf("\n\n Elements in Ascending Order: ");
    for (i = 0; i < a; i++)
    {
        printf(" %d,", asce[i]);
    }
    return 0;
}