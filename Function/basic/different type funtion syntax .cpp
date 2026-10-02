#include <iostream>
using namespace std;

void greeting(); // No parameters, no return value
void PrintName(string name); // Parameters, no return value
string CourseName(); // No parameters, return value
bool  Result(int marks); // Parameters and return value

int main()
{
    greeting(); // Function call
    PrintName("Promity"); // Function call with argument
    string course = CourseName(); // Function call with return value
    cout << "Your Course Name: " << course << endl;

    int number = 100;
    bool pass;
    pass = Result(number);
    if(pass == true) cout<<"You have passed in the exam."<<endl;
    else cout<<"Sorry, you have failed in the exam."<<endl;
    return 0;
}

// all Function definitions

void greeting()
{
    cout << "Welcome to Function lecture" << endl;
}

void PrintName(string name)
{
    cout << "Hello, " << name << endl;
}

string CourseName()
{
    string course = "C++ Programming";
    return course;
}

bool  Result(int marks){ //90

    bool pass= true;

    if(marks>=50)
    {
        pass = true;
    }
    else{
        pass = false;
    }

   return   pass;
}
