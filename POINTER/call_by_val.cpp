#include<iostream>
using namespace std;


int fuc(int x){
    return x+=2;
}


int main(){
    int a=3,b=4;
    cout<<"Before calling the function: "<<endl;
    cout<<"Val of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Val of b: "<<b<<endl;
    cout<<"Address of b: "<<&b<<endl;
    cout<<fuc(a)<<endl;
    cout<<"After calling the function: "<<endl;
    cout<<"Val of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Val of b: "<<b<<endl;
    cout<<"Address of b: "<<&b<<endl;







    return 0;
}