#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i + 1 < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s.substr(i, 2) << endl;
            return;
        }
    }
    for (int i = 0; i + 2 < n; i++)
    {
        if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
        {
            cout << s.substr(i, 3) << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}