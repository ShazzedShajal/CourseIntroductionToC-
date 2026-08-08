//print the largest number among 3 numbers using nested if-else
#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int x,y,z;
    cout<<"Enter Three numbers: ";
    cin>>x>>y>>z;

    if(x>=y){
        if(x>=z){
            cout<<x;
        }
        else{
            cout<<z;
        }
    }
    else if(y>=z){
        cout<<y;
    }
    else{
        cout<<z;
    }

    cout<<" is the largest number"<<endl;
    return 0;
}
