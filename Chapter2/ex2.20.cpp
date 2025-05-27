#include<iostream>
using namespace std;
int main(){
    int a=42;
    int *ptr=&a;

    *ptr=*ptr * *ptr;
    cout<<"multiply = "<<*ptr;
}