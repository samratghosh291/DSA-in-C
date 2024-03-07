
// Naive Pattern Searching Algorithm
// Given a string and a pattern, the task is to write a program to find the pattern in the string using the Naive algorithm.
//TC: O(n*m)
//SC: O(1)

#include<iostream>
using namespace std;
bool isMatch(string str, string pat, int i, int j, int n, int m){
    while(j<m){
        if(str[i+j]!=pat[j]){
            return false;
        }
        j++;
    }
    return true;
}

int main(){
    string str, pat;
    cout<<"Enter Main String: ";
    cin>>str;
    cout<<"Enter the pattern String: ";
    cin>>pat;
    int n=str.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++){
        int j=0;
        if(isMatch(str,pat,i,j,n,m)){
            cout<<"Pattern found at index: "<<i<<endl;
        }
    } 
    cout<<"Pattern not found"<<endl;
    return 0;
}