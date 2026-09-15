/*
Take N integers into an array and count the number of positive, negative, and zero elements.
Example:
Input: 5 -2 0 8 -7 0
Output:
Positive = 2
Negative = 2
Zero = 2
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

  // initialize counters for positive, negative, and zero elements
  int positive=0, negative=0, zero=0; 

  // logic to count positive, negative, and zero elements
  for(int i=0;i<n;i++)
  {
    if(a[i]>0)
      positive++;
    else if(a[i]<0)
      negative++;
    else
      zero++;
  }

  // print the counts
  cout<<"Positive = "<<positive<<endl;
  cout<<"Negative = "<<negative<<endl;
  cout<<"Zero = "<<zero<<endl;

return 0;
}