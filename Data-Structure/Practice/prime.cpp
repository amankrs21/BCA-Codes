#include<iostream>
using namespace std;

void table(int n)
{
    for (int i = 1; i < 11; i++)
    {
        cout << "\n " << n << " * " << i << " = " << (n*i);
    }
    
}

void check_prime(int num)
{
    int temp = 0;
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0){
                temp = 1;
                break;
            }
            else {
                temp = 0;
            }
        }
        if (temp == 0) {
            cout << "\n " << num << " is a Prime Number \n\n\n\n",num;
            table(num);
        }
        else {
            cout << "\n " << num << " is NOT a Prime Number\n";
        }
    }
    else {
        cout << "\n Error\n";
    }
}

int main(int argc, char const *argv[])
{
    int number;
    cout << "\n Enter Positive Number to check for Prime : ";
    cin >> number;
    check_prime(number);
    return 0;
}
