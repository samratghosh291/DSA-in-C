#include<bits/stdc++.h>
using namespace std;

class Student{           // The class

    public:              // Access specifier
    string name;
    int roll;
    char sec;

    // Constructor declaration
    Student(string nm,int rl,char sect);

};

    // Constructor definition outside the class
    Student::Student(string nm,int rl,char sect){    // Constructor with parameters
        name=nm;
        roll=rl;
        sec=sect;
    }





int main(){

      // Create Students objects and call the constructor with different values
    Student piku("Piku",89,'B');
    Student pinky("Pinky",01,'A');


    // Print values
    
    cout<<"Name: "<<piku.name<<"\n"; 
    cout<<"Roll: "<<piku.roll<<"\n"; 
    cout<<"Section: "<<piku.sec<<"\n"; 


    cout<<"Name: "<<pinky.name<<"\n"; 
    cout<<"Roll: "<<pinky.roll<<"\n"; 
    cout<<"Section: "<<pinky.sec<<"\n"; 


    
    



    return 0;
}