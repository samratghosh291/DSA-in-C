
// Remove the duplicate values from the string
// i/p: "aaxxbxc"
// o/p: "abcxxx"

#include <bits/stdc++.h>
using namespace std;

string moveXtoEnd(string s)
{

    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];

    string ans = moveXtoEnd(s.substr(1));

    if (ch == 'x' or ch == 'X')
    {
        return (ans + ch);
    }
    else
    {
        return (ch + ans);
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "The string after moved all X to the end: " << moveXtoEnd(s) << endl;

    return 0;
}