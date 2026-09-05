#include<bits/stdc++.h>
using namespace std;
int main() {
    int i=0;
    for(i = 1; i<15 ;i++){
        cout<<i<<endl;
        if(i==5)
        {
            continue;
        }
        if(i==9)
        {
            i=12;
            break;
        }
    }
    cout<< i<< endl;
    return 0;
}
// output: 1 2 3 4 5 6 7 8 9 12

