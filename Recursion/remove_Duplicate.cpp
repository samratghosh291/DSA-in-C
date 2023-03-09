
// Remove the duplicate values from the string 
// i/p: "aacbbdee"
// o/p: "acbde"

#include <bits/stdc++.h>
using namespace std;

string removeDup(string s)
{

    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "The string after remove duplicate: " << removeDup(s) << endl;

    return 0;
}