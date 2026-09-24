// C++ program to copy array elements and compare two arrays

#include <iostream>
using namespace std;
int main()
{
 int a1[6]={4,5,10,-8,300,10000};
 int a2[6];

 //copy element
 for(int i=0;i<6;i++){
    a2[i]=a1[i];
 }
 a2[1]=600; // changed a random value

 bool same = true;
 //compare two arrays
 for(int j= 0 ;j<6;j++){
    if(a1[j]!=a2[j]){
        same = false;
        break;
    }
 }

 cout<<"FIRST ARRAY:";
 for(int i=0;i<6;i++){
    cout<<a1[i]<<" ";
 }
 cout<<endl;

 cout<<"SECOND ARRAY:";
 for(int i=0;i<6;i++){
    cout<<a2[i]<<" ";
 }
 cout<<endl;

 if(same == true)
    cout<<"Arrays are equal";
 else
    cout<<"Arrays are not equal";
return 0;

}
