#include<bits/stdc++.h>
using namespace std;



class myClass {             // class

    public:                 //Access Specifier

    int myNum;              //Attribute (int variable)
    string myString;        // Attribute (string variable)

};




int main(){

myClass obj1;  // Create an object of MyClass


// Access attributes and set values
obj1.myNum=15;
obj1.myString="number 1";


// Print attribute values
cout<<"Number is: "<<obj1.myNum<<endl;
cout<<"String is: "<<obj1.myString;

return 0;

}