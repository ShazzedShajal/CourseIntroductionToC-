// Find the Smallest Element
/*
Take N integers into an array and find the smallest element.
Example:
Input: 12 45 7 89 23
Output: Smallest = 7

*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n; 
    int a[n]; // declare n sized array

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // main logic
    int smallest = a[0]; // assume first element is smallest
    for(int i=1;i<n;i++) // traverse the array from second element
    {
        if(a[i] < smallest) // check if current element is smaller than smallest
        {
            smallest = a[i]; // update smallest
        }
    }
    cout<<"Smallest = "<<smallest<<endl; // print the smallest element
}