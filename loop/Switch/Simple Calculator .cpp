/*
Write a C++ program that takes:
	• Two numbers 
	• An operator (+, -, *, /) 
Use switch to perform the selected operation.
Example:

Enter numbers: 10 5
Enter operator: *
Output: 50

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    double num1, num2, result;
    char op;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout<<"Invalid operator"<<endl;
            return 1;
    }
    cout<<"Output: "<<result<<endl;
    return 0;
}
