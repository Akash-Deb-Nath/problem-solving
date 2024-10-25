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
    string ros = s.substr(1);
    SubSequence(ros, ans);
    SubSequence(ros, ch + ans);
}

int main()
{
    SubSequence("ABC", "");
    return 0;
}