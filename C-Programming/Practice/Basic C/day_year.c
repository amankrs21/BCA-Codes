//program to convert days into weaks, months and years
#include<stdio.h>
int main()
{
    int day, weak, month,year;
    printf("\n Enter total number of Days: ");
    scanf("%d",&day);
    weak = day/7;
    month = day/30;
    year = day/365;
    printf("\n %d Days = %d Weaks",day,weak);
    printf("\n %d Days = %d Month",day,month);
    printf("\n %d Days = %d Year",day,year);
    getch();
}