// Replace PI with 3.14

// i/p: "pippxxppiixipi"
// op: "3.14ppxxp3.14ixi3.14"

#include <bits/stdc++.h>
using namespace std;

void reversePi(string s)
{

    if (s.length() == 0)   // base case
    { 
        return;
    }


    if (s[0] == 'p' && s[1] == 'i')
    {

        cout << "3.14";
        string res = s.substr(2);
        reversePi(res);
        return;
    }


    else
    {
        cout << s[0];
        string res = s.substr(1);
        reversePi(res);
        return;
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    reversePi(s);

    return 0;
}