#include<iostream>
#include "./myHeaderFile.h"
using namespace std;

int main()
{
    int a = 10, b = 5;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << sub(a, b) << endl;
    cout << "Multiplication: " << mul(a, b) << endl;
    // cout << "Division: " << div(a, b) << endl;
    cout << "Modulus: " << mod(a, b) << endl;
    return 0;
}