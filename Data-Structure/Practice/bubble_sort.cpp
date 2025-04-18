// Program for Bubble Sort

#include<iostream>
using namespace std;

void print(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << " " << a[i] << ", ";
    }
    cout << "\n";
}

void bubble(int *a, int s)
{
    for (int i = 0; i < s-1; i++)
    {
        for (int j = 0; j < s-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    print(a, s);
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "\n Enter Size of Array : ";
    cin >> size;
    
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << " Enter Element of Array : ";
        cin >> array[i];
    }
    
    cout << "\n Original Array is :- \n";
    print(array, size);

    cout << "\n After Sorting array is :- \n";
    bubble(array, size);

    return 0;
}
