#include <bits/stdc++.h>
using namespace std;

class Student
{ // class

public: // Access Specifier
    string name;  
    int roll;
    char section;
};

int main()
{

    // Create an object of Student
    Student piku;
    piku.name = "Piku";
    piku.roll = 89;
    piku.section = 'B';

    // Create another object of Student
    Student pinky;
    pinky.name = "Pinky";
    pinky.roll = 01;
    pinky.section = 'A';

    // Print attribute values
    cout << "Name: " << piku.name << endl
         << "Roll No: " << piku.roll << endl
         << "Section: " << piku.section << endl;
    cout << "Name: " << pinky.name << endl
         << "Roll No: " << pinky.roll << endl
         << "Section: " << pinky.section << endl;

    return 0;
}