#include<bits/stdc++.h>
using namespace std;

class car{                  //class
    public:                 // access specifier
    int speed(int maxSpeed); //method/ function defination

};

int car ::speed(int maxSpeed){ // method/ function defination outside the class
    return maxSpeed;
}

int main(){

    car myobj1;                      //create an obj1 of car
    cout<<myobj1.speed(200)<<endl;   //call the method with an argument


    return 0;
}