#include <iostream>
using namespace std;

int main() {
    int i = 0, &r1 = i;        // r1 is a reference to int i
    double d = 0, &r2 = d;     // r2 is a reference to double d

    // (a) r2 = 3.14159;
    r2 = 3.14159;
    //  Valid: r2 refers to d, which is a double.
    // So this assigns 3.14159 to d.

    // (b) r2 = r1;
    r2 = r1;
    //  Valid: r1 refers to i (int), r2 refers to d (double).
    // This assigns value of i to d → d = i; Implicit conversion int → double.

    // (c) i = r2;
    i = r2;
    //  Valid: r2 refers to d (double), i is int.
    // This assigns d to i → i = d; Implicit conversion double → int (decimal part lost).

    // (d) r1 = d;
    r1 = d;
    //  Valid: r1 refers to i (int), d is double.
    // This assigns value of d to i → i = d; Again, double → int conversion.

    // Display final values (optional)
    cout << "i = " << i << endl;
    cout << "d = " << d << endl;

    return 0;
}
