#include <iostream>
using namespace std;
int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    // j have type const int  but top level const drop so j have type int 
    // k have type const int&
    // p have type const int*
    //j2 have type const int     and k2 const int&

     cout << "j: " << j << endl;
    cout << "*p: " << *p << endl;
    cout << "j2: " << j2 << endl;
    cout << "k: " << k << endl;
    cout << "k2: " << k2 << endl;
}