#include<iostream>
using namespace std;

int main(){

    int a=10;
    int b=20;
    void *ptr;
    ptr=&a;

    //void pointer must have typecasted berfore de referencing it
    cout<<*static_cast<int*>(ptr)<<endl;
    ptr=&b;
    //void pointer must have typecasted berfore de referencing it
    cout<<*static_cast<int*>(ptr)<<endl;

    return 0;
}