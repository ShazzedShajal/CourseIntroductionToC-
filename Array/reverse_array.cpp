// Reverse an array 

/*

Take N integers into an array and print them in reverse order.
Example:
Input: 1 2 3 4 5
Output: 5 4 3 2 1


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


  // printing the array in reverse order
    cout<<"The elements of array in reverse order: ";
    for(int i=n-1;i>=0;i--)
    {
      cout<<a[i]<<" ";
    }

return 0;
}