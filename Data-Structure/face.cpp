#include<iostream>
using namespace std;

class Base{
    int arr[5];
};
class Child1: public Base{

};
class Child2: public Base {

};
class GrandChild: public Child1, public Child2{

};
int main(void){
    cout << sizeof(GrandChild);
    return 0;
}