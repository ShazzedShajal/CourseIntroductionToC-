// C++ program to swap two numbers using a temporary variable
#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cin>>a>>b;

    cout<<"before swapping: a= "<<a<<" , b= "<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;
    
    //swap(a,b);

    cout<<"After swapping: a= "<<a<<" , b= "<<b<<endl;


return 0;
}
