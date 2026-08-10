// C++ program to check whether a character is an alphabet or not
#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch;
  cout<<"Enter a alphabet:"<<endl;
  cin>> ch;
  if(ch >= 'a' && ch <= 'z') {
    cout<<ch<<" is a lowercase alphabet."<<endl;
  } else if(ch >= 'A' && ch <= 'Z') {
    cout<<ch<<" is an uppercase alphabet."<<endl;
  } else {
    cout<<ch<<" is not an alphabet."<<endl;
  }
  return 0;
}
