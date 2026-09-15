//Average of array elements

/*

Take N integers into an array and print their average.
Example:
Input: 1 2 3 4 5
Output: 3

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int a[n]; // decare array of size n
  cout<<"Enter the elements of array: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i]; // user input 
  }
  


  int sum=0;
  for(int i=0;i<n;i++) // traverse the array
  {
    sum = sum + a[i];
  }

  //average calculation
  double average = (double)sum / n; // type casting to get decimal value
  cout<<"Average of array elements: "<<average<<endl;

return 0;
}