// Print Only Elements Greater Than 10

/*
Take N integers into an array and print only the elements greater than 10.
Example:
Input: 5 12 8 25 3 15
Output: 12 25 15
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int a[n];
  cout<<"Enter the elements of array: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

    cout<<"The elements of array greater than 10 are: ";
    for(int i=0;i<n;i++)    
    {
        if(a[i]>10)
        {
            cout<<a[i]<<" ";
        }
    }
  
return 0;
}