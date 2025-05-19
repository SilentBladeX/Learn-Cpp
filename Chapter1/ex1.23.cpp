#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item curritem, item1;
    int count = 1;

    cout << "Enter transactions" << endl;

    if (cin >> curritem)
    {
        while (cin >> item1)
        {
            if (curritem.isbn() == item1.isbn())
            {
                {
                    count++;
                }
            }
            else
            {
                cout<<"ISBN "<<curritem.isbn()<<" total transaction "<<count<<endl;
                curritem=item1;
                count=1;
            }
        }
     
          cout<<"ISBN "<<curritem.isbn()<<" total transaction "<<count<<endl;

        
    }else{
        cerr<<"invalid transaction input ";

    }
}
