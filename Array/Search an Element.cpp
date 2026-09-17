// Search an Element in Array

/*
Take N integers into an array. Then take another number and search whether it exists in the array.

Example:
Array: 10 20 30 40 30
Search: 30
Output: Element found
If it does not exist, print Element not found.

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
    
        int searchElement;
        cout<<"Enter the element to search: ";
        cin>>searchElement;
    
        bool found = false; // flag to check if element is found
    
        for(int i=0;i<n;i++)
        {
            if(a[i] == searchElement)
            {
                found = true;
                break; // exit loop if element is found
            }
        }
    
        if(found==true)
            cout<<"Element found"<<endl;
        else
            cout<<"Element not found"<<endl;
return 0;
}