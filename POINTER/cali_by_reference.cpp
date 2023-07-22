#include<iostream>
using namespace std;

int add(int *a,int *b){
    *a=*a+5;  //15
    *b=*b+5;  //25
    return(*a+*b);
}

int main(){
    int x=10,y=20;
    cout<<add(&x,&y)<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}