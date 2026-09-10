/*
1
12
123
1234
12345
*/  
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int row = 1;row<= n; row++){
        for(int col = 1 ; col<=row; col++){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}
//

