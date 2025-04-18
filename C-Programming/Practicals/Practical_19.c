/*program to input marks of 5 subject, calculate total and percentage.and grade or
class using ladder if statement*/
#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,per,total;
    printf("\n Enter the Marks of 1st Subject : ");
    scanf("%f",&s1);
    printf(" Enter the Marks of 2nd Subject : ");
    scanf("%f",&s2);
    printf(" Enter the Marks of 3rd Subject : ");
    scanf("%f",&s3);
    printf(" Enter the Marks of 4th Subject : ");
    scanf("%f",&s4);
    printf(" Enter the Marks of 5th Subject : ");
    scanf("%f",&s5);
    printf(" Enter the total marks of all Subjects : ");
    scanf("%f",&total);
    per = (s1+s2+s3+s4+s5)/total * (100);
    printf("\n Percentage is --> %.2f%%",per);
    if (per > 74 && per < 101)
    {
        printf("\n Student Passed with DISTINCTION");
    }
    else if (per > 59 && per < 75)
    {
        printf("\n Student Passed with FIRST CLASS");
    }
    else if (per > 49 && per < 60)
    {
        printf("\n Student Passed with SECOND CLASS");
    }
    else if (per > 39 && per < 50)
    {
        printf("\n Student just passed with PASSING MARKS");
    }
    else
    {
        printf("\n Stdent is FAILED");
    }
    getchar();
    printf("\n\n\n press ENTER to exit...  ");
    getchar();
    return 0;
}