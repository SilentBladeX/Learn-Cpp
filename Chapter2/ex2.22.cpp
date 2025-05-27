#include<iostream>
using namespace std;
int main(){
    //if(p)
    int *p=nullptr;

    if(p){
        cout<<"Pointer is Not NULL"<<endl;
    }else{
        cout<<"Pointer is  Null"<<endl;
    }

    int a=10;
    int *pr=&a;

    if(*pr){
        cout<<"Value is Non-Zero"<<endl;
    }else{
        cout<<"Value is zero"<<endl;
    }

}