#include<bits/stdc++.h>
using namespace std;

void reverse(string s){



if (s.length()==0){    //base case
    return;
}

 string rest =s.substr(1);  //it will rerurn the string after 1st character of s.

    reverse(rest);
    cout<<s[0];

    return;

}




int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

 reverse(s);

    return 0;
}