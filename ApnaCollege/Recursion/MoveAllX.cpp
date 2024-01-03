#include <bits/stdc++.h>

using namespace std;

string MoveAllX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    cout << ch << endl;
    string ans = MoveAllX(s.substr(1));
    cout << ans << endl;
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    cout << MoveAllX("asxdghxxxhxp");
    return 0;
}