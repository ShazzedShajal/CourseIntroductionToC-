// summation of array elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array elements: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum +a[i];
    }
    cout<<"\n The summation is: "<<sum<<endl;

    return 0;
}
