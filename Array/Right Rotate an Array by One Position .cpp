// C++ program to right rotate an array by one position

/*
Move every element one position to the right. Move the last element to the first position.
Example:
Input: 10 20 30 40 50
Output: 50 10 20 30 40
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter array size:"<<endl;
    cin>> n;
    int a[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++) cin>>a[i];

   for(int i=n-1;i>0;i--){
        swap(a[i],a[i-1]);
        /*
        int temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
        */
   }

   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }


return 0;
}
