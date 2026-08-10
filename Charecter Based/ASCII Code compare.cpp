// C++ program to check whether a character is an alphabet or not

//ASCII value used as a sample

#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch;
  cout<<"Enter a alphabet:"<<endl;
  cin>> ch;
  if(ch >= 97 && ch <= 122) { // using ascii value of lower case alphabet
    cout<<ch<<" is a lower case alphabet."<<endl;
  } else if(ch >= 'A' && ch <= 'Z') {
    cout<<ch<<" is an uppercase alphabet."<<endl;
  } else {
    cout<<ch<<" is not an alphabet."<<endl;
  }
  return 0;
}
