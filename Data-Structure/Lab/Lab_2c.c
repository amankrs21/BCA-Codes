#include<string.h>

void main()
{
    char str1[100],str2[100];

    // taking input from user
    printf("\n Enter String 1 : ");
    gets(str1);
    printf("\n Enter String 1 : ");
    gets(str2);

    if (strcmp(str1,str2)==0){
        printf("\n Given Strings are Equal");
    }
    else{
        printf("\n Given Strings are NOT Equal\n");
    }
}