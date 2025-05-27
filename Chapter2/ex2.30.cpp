#include <iostream>
using namespace std;

int main()
{
    const int v2 = 0;
    // Top-level const: 'v2' itself is constant. Its value cannot be changed.

    int v1 = v2;
    // No const here: 'v1' is a plain int initialized with the value of 'v2'.

    int *p1 = &v1, &r1 = v1;
    // No const: both 'p1' (pointer to int) and 'r1' (reference to int) are modifiable.

    const int *p2 = &v2;
    // Low-level const: 'p2' is a pointer to const int.
    // You can't change the value it points to through this pointer.

    int i = 42;  // Added declaration for 'i' to make the next line legal.

    int *const p3 = &i;
    // Top-level const: 'p3' is a const pointer to int.
    // The pointer can't point somewhere else, but the value it points to is changeable.

    return 0;
}
