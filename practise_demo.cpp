#include<bits/stdc++.h>
using namespace std;
int main()
{
 char colour='R';
 cin>>colour; 
 colour = toupper(colour);
 switch (colour)
 {
   case 'R':
  cout<<"Stop"<<endl;
   break;
   case 'Y':
  cout<<"GET READY"<<endl;
   break;
   case 'G':
  cout<<"GO"<<endl;
   break;
   default:
    cout<<"Invalid Signal"<<endl;
}
return 0;
}