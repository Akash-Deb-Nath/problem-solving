#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    string s;
    cin >> s;
    bool flag = 0;
    for (ll i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << s.size() << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}