#include <bits/stdc++.h>
using namespace std;
void  isPrime(int num){ // 6
    bool prime = true;
    if(num == 1) {prime = false;}

    for(int i = 2 ; i<num ; i++){ 
            if(num%i==0) {
                prime = false;
                break;
            }
    }
    if(prime ==true){
        cout<<"Prime"<<endl;
    }
    else
        cout<<"Not Prime"<<endl;
}
int main()
{
    int num;  
    cout<<"Enter a number to check if it is prime or not: ";  
    cin>>num;
    isPrime(num);
    return 0;
}
