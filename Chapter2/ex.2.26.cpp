#include<iostream>
using namespace std;
int main(){
    //(a) const int buf;
    //illegal bcz it must must be initialized at time of declaration

 
    //(b) int cnt = 0;
    //Legal


    //(c) const int sz = cnt;
    // Legal


    //(d) ++cnt; ++sz;
    //++cnt is legal
    //++sz is illegal bcz it is constant and it cannot modify 
}