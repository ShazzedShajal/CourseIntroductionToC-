#include <iostream>
using namespace std;

// user define function
 void summation(int x ,int y ){
     int sum = x + y;
     cout<<"Sum = "<<sum<<endl;
 }
 
int main()
{
    summation(10,20);
    summation(100,555);
    summation(10,-4);
    summation(0,0);
    summation(777,-111);

    return 0;
}
