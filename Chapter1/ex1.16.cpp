// prints the sum of a set of integers read from cin
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter a number u want to sum" << endl;

    while (cin >> num && num != 0)
    {
        sum += num;
    }
    cout << "sum=" << sum;
    return 0;
}