// C++ program to demonstrate the use of continue statement
#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int i = 1; i<15 ;i++){
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
// output: 1 2 3 4 6 7 8 9 10 11 12 13 14

