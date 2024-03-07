#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


// const char str1[] = "abcdefghijklmnopqrstuvwxyz""ABCDEFGHIJKLMNOPQRSTUVWXYZ""0123456789""!@#$%^&*()_+";
const char str1[] ="1234";

long long count=0;
string generatePassword(int n){
    string password = "";
    for(int i=0; i<n; i++){
        password += str1[rand()%100];
    }
    return password;
}


int main() {
    int n;
    cout << "Enter the length of the password: ";
    cin >> n;
    cout << "Your password is: ";
    string password=generatePassword(n) ;
    while (true)
    {
        /* code */
        string guess = generatePassword(n);
        if(guess==password){
            cout << "Guess found after"<< " " << count << endl;
            break;
        }
        count++;
    }
    
    return 0;
}


