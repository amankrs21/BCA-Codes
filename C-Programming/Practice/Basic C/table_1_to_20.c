#include<stdio.h>
void main()
{
    int i, j;
    printf("\n                                              Multiplication Table    ");
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=20; j++)
        {
            printf("%d\t",j*i);
        }
        printf("\n\n");
    }
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------\n");    
    getchar();
}