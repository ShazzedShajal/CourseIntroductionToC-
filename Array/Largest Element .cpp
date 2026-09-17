// Find the Largest Element

/*
Take N integers into an array and find the largest element.
Example:
Input: 12 45 7 89 23
Output: Largest = 89

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
    int largest = a[0]; // assume first element is largest
    for(int i=1;i<n;i++) // traverse the array from second element
    {
        if(a[i] > largest) // check if current element is greater than largest
        {
            largest = a[i]; // update largest
        }
    }
    cout<<"Largest = "<<largest<<endl; // print the largest element
}