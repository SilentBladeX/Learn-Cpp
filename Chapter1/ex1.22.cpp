#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item1, item2;

    cout << "Enter transaction for same isbn" << endl;
    if (cin >> item1)
    {
        while (cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
            {
                item1 += item2;
            }
            else{
                cerr<<"different isbn "<<endl;
                cout << " Total sum for ISBN is =" << item1<<endl;
                return 1;
            }
        }
        cout<<"Total sum for same isbn is "<<item1<<endl;
    }
    else
    {
        cerr << "invalid data";
        return 1;
    }
    return 0;
}