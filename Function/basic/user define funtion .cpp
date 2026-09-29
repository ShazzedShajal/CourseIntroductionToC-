#include <iostream>
using namespace std;

// user define function
 void summation(int x ,int y ){
     int sum = x + y;
     cout<<"Sum = "<<sum<<endl;
 }
 
int main()
{
    summation(10,20);        // function call
    summation(100,555);      // function call
    summation(10,-4);        // function call
    summation(0,0);          // function call
    summation(777,-111);     // function call

    return 0;
}

// here 10, 20, 100, 555, 10, -4, 0, 0, 777, -111 are arguments or actual parameters
// and x,y are the formal parameters.