//program to calculate average and percentage of 5 subjects marks
#include <stdio.h>
float main()
{
    float s1, s2, s3, s4, s5, tot, avg, per;
    printf("\n Enter Marks of Subject 1 : ");
    scanf("%f", &s1);
    printf(" Enter Marks of Subject 1 : ");
    scanf("%f", &s2);
    printf(" Enter Marks of Subject 1 : ");
    scanf("%f", &s3);
    printf(" Enter Marks of Subject 1 : ");
    scanf("%f", &s4);
    printf(" Enter Marks of Subject 1 : ");
    scanf("%f", &s5);
    printf("\n Enter total Marks of all Subjects: ");
    scanf("%f", &tot);
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    per = ((s1 + s2 + s3 + s4 + s5) / tot) * 100;
    printf("\n Average --> %.2f", avg);
    printf("\n Percentage --> %.2f%% ", per);
    getch();
}