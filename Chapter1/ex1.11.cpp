#include <iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    cout << "The Number between" << num1 << " And " << num2 << " are" << endl;
    while (num1 <= num2)
    {
        cout << num1 << endl;
        num1++;
    }
}