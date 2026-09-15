//count Even and Odd numbers in an array

/*

Take N integers into an array. Count how many elements are even and how many are odd.
Example:
Input: 2 7 4 9 6
Output:
Even = 3
Odd = 2

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int a[n]; // decare n sized array

  cout<<"Enter the elements of array: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  

  // main logic 
  int even_count=0, odd_count=0;
  for(int i=0;i<n;i++) // traverse the array
  {
    if(a[i]%2==0) // check if the number is even
    {
      even_count++;
    }
    else // outherwise it is odd
    {
      odd_count++;
    }
  }
  cout<<"Even numbers: "<<even_count<<endl;
  cout<<"Odd numbers: "<<odd_count<<endl;
return 0;
}