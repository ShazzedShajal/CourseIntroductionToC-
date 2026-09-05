/*
Write a C++ program that takes a number 1–7 and prints the corresponding day.
Example:
	• 1 → Monday 
	• 2 → Tuesday 
	• ... 
	• 7 → Sunday 
	• Any other number → Invalid day 

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout<<"Enter a number (1-7): ";
    cin>>day; // 4
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid day"<<endl;
            break;
    }
    return 0;
}