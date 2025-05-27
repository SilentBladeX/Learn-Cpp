#include <iostream>
using namespace std;
int main()
{
    // (a) int i = -1, &r = 0;
    // Illegal refrence must be an object if literal than it should be an constant
    // Example : int i=-1, const &r=0;

    // (b) int *const p2 = &i2;
    // Illegat bcz i2 cannot be initialized
    // if i2 is initialed than it must b legal

    // (c) const int i = -1, &r = 0;
    // legal

    // (d) const int *const p3 = &i2;
    // illegal i2 cannot be initialized
    // if i2 is initialed than it must b legal

    // (e) const int *p1 = &i2;
    // illegal bcz i2 is not initialized
    // if i2 is initialed than it must b legal

    //  (f) const int &const r2;
    // illegal refrence cannnot be constant itself

    // (g) const int i2 = i, &r = i;
    // legal const int i2 is initialized with i, and const reference r is also bound to i.
}
