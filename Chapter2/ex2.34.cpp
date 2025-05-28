#include <iostream>
using namespace std;
int main()
{

    int i = 0, &r = i;
    const int ci = i, &cr = ci;

    auto a = r;
    auto b = ci;        // b is an int (top-level const in ci is dropped)
    auto c = cr;        // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;        // d is an int*(& of an int object is int*)
    auto e = &ci;       // e is const int*(& of a const object is low-level const)
    const auto f = ci;  // deduced type of ci is int; f has type const int
    auto &g = ci;       // g is a const int& that is bound to ci
    const auto &j = 42; // ok: we can bind a const reference to a literal

    cout<<"Before initialization"<<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    cout << "g = " << g << endl;
    cout << "j= " << j << endl;

    a = 42;
    b = 42;
    c = 42;
    *d = 42;
    // e=42;   error e is const int*
    // f=42;    f has const int type
    // g=42;    g have const int&

    // After assign

    cout<<"After assign 24"<<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << *d << endl;
    cout << "j= " << j << endl;
}