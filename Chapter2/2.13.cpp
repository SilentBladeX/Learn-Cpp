#include <iostream>
using namespace std;
int i = 42;

int main()
{

    
    int i = 100;
    int j = i;
    //value of j is 100 bcz we overwrite the variable i
    cout << "Value of j is " << j<<endl;

    //we alse acccess global value by using (::)
    cout<< "Value of j is " << ::i ;
}