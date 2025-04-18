#include<string.h>
int main()
{
    char str[10];
    int len;
    // now taking input from user
    printf("\n Enter the String : ");
    gets(str);

    // now finding the length for using Inbuilt function strlen()
    len = strlen(str);

    printf("\n Length of the String is -> %d\n",len);
    
    return 0;
}
