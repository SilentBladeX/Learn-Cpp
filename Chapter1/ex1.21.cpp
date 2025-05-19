#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item1, item2;

    cout << "Enter book" << endl;
    cin >> item1 >> item2;

    if (item1.isbn() == item2.isbn())
    {
        cout << "sum=" << item1 + item2;
    }
    else
    {
        cout << "different isbn it cannot sum";
    }
}
