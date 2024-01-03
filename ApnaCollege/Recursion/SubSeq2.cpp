#include <bits/stdc++.h>

using namespace std;

void SubSequence(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    SubSequence(ros, ans);
    SubSequence(ros, ans + ch);
    SubSequence(ros, ans + to_string(code));
}

int main()
{
    SubSequence("AB", "");
    return 0;
}