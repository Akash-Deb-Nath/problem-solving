#include <bits/stdc++.h>

using namespace std;

string RemoveDuplicate(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    // cout << "SubString= " << s.substr(1) << " ch= " << ch << endl;
    string ans = RemoveDuplicate(s.substr(1));
    // cout << "ans= " << ans << endl;
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    cout << RemoveDuplicate("aaaaabbbbbcccccdddddeeeee");
    return 0;
}