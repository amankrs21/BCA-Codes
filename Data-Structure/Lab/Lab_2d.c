#include<string.h>

void main()
{
    char str1[100],str2[100];

    // taking input from user
    printf("\n Enter String 1 : ");
    gets(str1);
    printf("\n Enter String 2 : ");
    gets(str2);

    //  for combing of two string strcat() funtion is used
    strcat(str1,str2);

    // str1 will return the concatenated string
    printf("\n Concataneted String is : %s\n",str1);
}
