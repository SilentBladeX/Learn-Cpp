#include<iostream>
#include "Sales_item.h"
using namespace std;
int main(){
    Sales_item item1,item2;

    cout<<"Enter Transactions"<<endl;
    if(cin>>item1){
        while(cin>>item2){
            if(item1.isbn()==item2.isbn()){
                item1+=item2;
                
            }
            else{
                cout<<"Total transaction of ISBN are "<<item1<<endl;
                item1=item2;
                
            }
        }
        cout<<"Total transaction of ISBN are "<<item1<<endl;
    }
    else{
        cerr<<"Invalid input"<<endl;
        return -1;
    }
    return 0;
}