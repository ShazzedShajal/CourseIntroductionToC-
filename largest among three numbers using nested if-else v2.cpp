
//print the largest number among three numbers using nested if-else

//way 2
// it's easier to understand  nested  if-else
#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int x,y,z;
    cout<<"Enter Three numbers: ";
    cin>>x>>y>>z;
    if(x>=y)
    {
        if(x>=z)
        {
            cout<<x<<" is the largest number"<<endl;
        }
        else
        {
            cout<<z<<" is the largest number"<<endl;
        }
    }
    else
    {
        if(y>=z)
        {
            cout<<y<<" is the largest number"<<endl;
        }
        else
        {
            cout<<z<<" is the largest number"<<endl;
        }
    }
    return 0;
}
