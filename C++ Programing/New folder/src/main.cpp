#include<iostream>
#include "fact.h"
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0;
}