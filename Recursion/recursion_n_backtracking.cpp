#include<bits/stdc++.h>
using namespace std;


void name(int i,int n){
    if(i>n) return ;
    cout<<"Piku\n";
    return name(i+1,n);
}

void print_1_to_n(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    return print_1_to_n(i+1,n);
}

void print_n_to_1(int i,int n){
    if(i<1) return ;
    cout<<i<<endl;
    return print_n_to_1(i-1,n);
}

void print_1_to_n_backtracking(int i,int n){
    if(i<1) return ;
    print_1_to_n_backtracking(i-1,n);
    cout<<i<<endl;
    
}


void print_n_to_1_backtracking(int i,int n){
     if(i>n) return ;
    print_n_to_1_backtracking(i+1,n);
    cout<<i<<endl;
}


int main(){

    int n;
    cout<<"Enter the number of N: ";
    cin>>n;
    cout<<"Display N times of name: \n";
    name(1,n);
    cout<<"Display 1 to n:\n";
    print_1_to_n(1,n);
    cout<<"Display n to 1:\n";
    print_n_to_1(n,n);
    cout<<"Display 1 to n using backtracking: ";
    print_1_to_n_backtracking(n,n);
    cout<<"Display n to 1 using backtracking: ";
    print_n_to_1_backtracking(1,n);
    

    return 0;
}