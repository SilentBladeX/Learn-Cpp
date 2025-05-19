#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item book;

    cout << "Enter book" << endl;
    while (cin >> book)
    {
        cout << "book=" << book << endl;
    }
}
