#include<stdio.h>
void main()
{
    int sub1,sub2,sub3,sub4,sub5,total;
    float per;
    printf("\n Enter the marks get in Maths subject:");
    scanf("%d",&sub1);
    printf("\n Enter the marks get in English subject:");
    scanf("%d",&sub2);
    printf("\n Enter the marks get in Hindi subject:");
    scanf("%d",&sub3);
    printf("\n  Enter the marks get in Computer subject:");
    scanf("%d",&sub4);
    printf("\n Enter the marks get in science subject:");
    scanf("%d",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    per=(total)/5;
    printf("\n Percentage got in all five subject is:%f",per);
    if(per<100 && per>85)
    {
        printf("\n First class");
    }
    else if(per<85 && per>75)
    {
        printf("\n Second class");
    }
    else if(per>65 && per<75)
    {
        printf("\n Third class");
    }
    else 
    {
        printf("\n You are fail.");
    }
}