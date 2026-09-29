#include <iostream>
using namespace std;

// function prototypes
void summation(double x ,double y ) ; 
void subtraction(int x, int y) ;

int main()
{
    summation(10.56,20.34);
    subtraction(100,555);
    summation(10,-4);
    subtraction(777,-111);
    summation(0,0);

    cout<<"all functions are executed"<<endl;

    return 0;
}

// function definition
 void summation(double x ,double y ){ 
     double sum = x + y;
     cout<<"Sum = "<<sum<<endl;
 }

// function definition
 void subtraction(int x, int y){
    int sub = x-y;
    cout<<"Subratction = "<<sub<<endl;
 }
