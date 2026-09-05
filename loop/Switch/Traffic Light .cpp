/*
    Take a character representing a traffic light:

R → Red
Y → Yellow
G → Green
Use switch to display the appropriate instruction:
	• Red → Stop 
	• Yellow → Get Ready 
	• Green → Go 
For any other character → Invalid Signal
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    char signal;
    cout<<"Enter the traffic light signal (R/Y/G): ";
    cin>>signal;

    switch(signal){
        case 'R':
            cout<<"Stop"<<endl;
            break;
        case 'Y':
            cout<<"Get Ready"<<endl;
            break;
        case 'G':
            cout<<"Go"<<endl;
            break;
        default:
            cout<<"Invalid Signal"<<endl;
    }
    return 0;
}