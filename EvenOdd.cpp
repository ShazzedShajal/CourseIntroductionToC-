//check whether a number is even or odd

#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;

    if(n%2==0)   //if(n%2 != 1)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }   
    return 0;
}
