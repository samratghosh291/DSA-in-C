// Generate all substring with ASCII values 
// i/p: "AB" 
// B
// 66
// A
// AB
// A66
// 65
// 65B
// 6566




#include <iostream>
using namespace std;

void subseqWithASCII(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseqWithASCII(ros, ans);
    subseqWithASCII(ros, ans + ch);
    subseqWithASCII(ros, ans + to_string(code));

    return;
}

int main()
{

    string s;
    cout << "Enter the string: ";
    cin >> s;
    subseqWithASCII(s, "");

    return 0;
}