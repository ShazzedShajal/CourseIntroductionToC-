
// C++ program to check whether a character is a vowel or a consonant


// only lowercase letters are considered in this program
// here, considering user input between a-z only, not any other characters

#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch;
  cout<<"Enter a character a-z:"<<endl;
  cin>> ch;
  if(ch== 'a' || ch=='e' || ch=='i' || ch =='o' || ch =='u' ){
    cout<<"Vowel"<<endl;
  }
  else
  {
      cout<<"Consonent"<<endl;
  }

  return 0;
}
