//in this program, elements will be readed and then printed using array.
#include<stdio.h>
int main()
{
    int read[100];
    int i,n;
    printf("\n Enter the Size of the Array: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\n Enter the elements of the Array: ");
        scanf("%d",&read[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",read[i]);
    }
    getch();
}
