#include <iostream>
using namespace std;

int main()
{
    // Unsigned integers
    unsigned u = 10, u2 = 42;

    // Subtracting smaller unsigned from larger → normal result
    cout << u2 - u << endl;  // Output: 32

    // Subtracting larger unsigned from smaller → wraps around (unsigned can't be negative)
    cout << u - u2 << endl;  // Output: large number (e.g., 4294967264 if 32-bit)

    // Signed integers
    int i = 10, i2 = 42;

    // Subtracting smaller from larger (signed) → normal result
    cout << i2 - i << endl;  // Output: 32

    // Subtracting larger from smaller (signed) → gives negative result
    cout << i - i2 << endl;  // Output: -32

    // Mixing signed and unsigned:
    // i - u → i (signed) gets converted to unsigned → may give large value if i < u
    cout << i - u << endl;   // Output: 0 (both are 10, so subtraction is fine)

    // u - i → both promoted to unsigned if same size, result = 0
    cout << u - i << endl;   // Output: 0

    return 0;
}
