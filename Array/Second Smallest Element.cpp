// Find the Second Smallest Element

/*
Take N integers into an array and find the second-smallest element.
Example:
Input: 10 25 8 40 15
Output: Second smallest = 10
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
    int smallest = INT_MAX; // initialize smallest to maximum integer value
    int secondSmallest = INT_MAX; // initialize second smallest to maximum integer value

    for(int i=0;i<n;i++) // traverse the array
    {
        if(a[i] < smallest) // check if current element is smaller than smallest
        {
            secondSmallest = smallest; // update second smallest
            smallest = a[i]; // update smallest
        }
        else if(a[i] < secondSmallest && a[i] != smallest) // check if current element is smaller than second smallest and not equal to smallest
        {
            secondSmallest = a[i]; // update second smallest
        }
    }

    if(secondSmallest == INT_MAX) // check if second smallest was updated
        cout << "No second smallest distinct element";
    else
        cout << "Second smallest = " << secondSmallest << endl; // print the second smallest element

    return 0;
}