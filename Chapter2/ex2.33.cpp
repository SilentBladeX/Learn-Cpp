#include <iostream>
using namespace std;

int main()
{
    const int ci = 42;  // constant integer

    auto a = 42;       // a is int
    // Valid: 42 is int literal, auto deduces int

    auto b = 42;       // b is int
    //  Valid: same as above

    auto c = 42;       // c is int
    //  Valid: same again

    auto d = &ci;
    // d is const int*
    //  If we assign int* = const int*, it's invalid (but this line alone is fine)

    auto e = &ci;
    // e is also const int*
    //  Same as above if used where int* is expected

    const auto f = ci;
    // f is const int
    //  Valid: const preserved because declared explicitly

    auto &g = ci;
    // g is const int&
    //  Valid: auto deduces reference type from const int
    // ❗ If you try to modify g later (g = 30), you'll get an error because it's const

    // auto &h = 42;
    //  Invalid: can't bind non-const reference (int&) to literal (temporary)

    const auto &j = 42;
    // j is const int&
    //  Valid: const reference can bind to literal

    return 0;
}
