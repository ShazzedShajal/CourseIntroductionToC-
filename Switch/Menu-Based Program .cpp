/*
Create a menu:

1. Check Even/Odd
2. Check Positive/Negative
3. Find Square
4. Exit
Take the user's choice and use switch to perform the selected operation.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int choice, num;
    cout<<"Menu:\n";
    cout<<"1. Check Even/Odd\n";
    cout<<"2. Check Positive/Negative\n";
    cout<<"3. Find Square\n";
    cout<<"4. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter a number: ";
            cin>>num;
            if(num % 2 == 0)
                cout<<num<<" is Even"<<endl;
            else
                cout<<num<<" is Odd"<<endl;
            break;
        case 2:
            cout<<"Enter a number: ";
            cin>>num;
            if(num > 0)
                cout<<num<<" is Positive"<<endl;
            else if(num < 0)
                cout<<num<<" is Negative"<<endl;
            else
                cout<<num<<" is Zero"<<endl;
            break;
        case 3:
            cout<<"Enter a number: ";
            cin>>num;
            cout<<"Square of "<<num<<" is "<<num*num<<endl;
            break;
        case 4:
            cout<<"Exiting the program."<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}