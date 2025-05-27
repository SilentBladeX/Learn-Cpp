#include<iostream>
using namespace std;
int main(){
    int i, &r1=i;

    i=5,r1=10;


    cout<<i<<" "<<r1;
}