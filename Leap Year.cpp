
// C++ program to check whether a year is a leap year or not

/*
    if the year is divisible by 4 AND not divisible by 100
   OR if year is divisible by 400
   then it is a leap year
*/

#include<bits/stdc++.h>
using namespace std;    
int main() {

  int year;

  cout << "Enter a year: ";
  cin >> year;

 
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}
/*
Leap year is a special year that has 366 days instead of the usual 365. 
It includes an extra day, February 29, known as a leap day. 
This extra day keeps our calendar in sync with the Earth's trips around the Sun.
*/
