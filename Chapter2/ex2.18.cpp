#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Value of a =" << a << endl;
    cout << "Value of pointer=" << *ptr << endl;
    cout << "Address of a =" << ptr << endl;
    cout << "Address of pointer=" << &ptr << endl;

    cout <<"---"<< endl;

    *ptr = 20;

    cout << "Value of a =" << a << endl;
    cout << "Value of pointer=" << *ptr << endl;
    cout << "Address of a =" << ptr << endl;
    cout << "Address of pointer=" << &ptr << endl;
}