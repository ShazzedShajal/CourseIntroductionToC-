/*
   *
  ***
 *****
*******

*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows of pyramid: ";
    cin>>n;
    int space = n-1;
    for(int row = 0;row<n; row++){ // 0 to n-1
        for (int i = 1; i <=space; i++)
        {
            cout<<" ";
        }
        space--;
        
        for(int col = 1 ; col<=(row*2+1); col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//

