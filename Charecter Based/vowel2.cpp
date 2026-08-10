// C++ program to check whether a character is a vowel or consonant
//Here, considering only alphabets and not any other character
// both uppercase and lowercase vowels are considered

#include<bits/stdc++.h>
using namespace std;
int main() {
  char ch;
  cout<<"Enter a character:"<<endl;
  cin>> ch;
  if(ch== 'a'  || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U'){
    cout<<"Vowel"<<endl;
  }
  else
  {
      cout<<"Consonent"<<endl;
  }
  return 0;
}
