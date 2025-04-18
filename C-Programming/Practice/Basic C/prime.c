#include <stdio.h>

int i, temp = 0;

void check_prime();
void table();

int main(int argc, char const *argv[])
{
    int num;
    printf("\n Enter Postive Number to find Number is Prime : ");
    scanf("%d",&num);
    check_prime(num);
    printf("\n");
    return 0;
}

void check_prime(number)
{
    if (number > 1) {
        for ( i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                temp = 1;
                break;
            }
            else {
                temp = 0;
            }
        }
        if (temp == 0)
        {
            printf("\n %d is a Prime Number\n\n\n",number);
            table(number);
        }
        else {
            printf("\n %d is NOT a Prime Number",number);
        }
    }
    else {
        printf("\n Error");
    }
}

void table(num)
{
    for ( i = 1; i < 11; i++)
    {
        printf("\n  %d  *  %d  =  %d",num,i,num*i);
    }
}
