#include<bits/stdc++.h>

using namespace std;

class myClass{          //The Class

    public:             //Access Specifier

     myClass(){         //constructure
        cout<<"Hello World!";
     }

};

int main(){
    myClass myobj;     //Create an object of myClass (this will call the constructor)

    return 0;
}