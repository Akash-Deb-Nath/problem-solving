#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll sum = 0;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += s[i] - '0';
        if (s[i] == '2')
        {
            x++;
        }
        if (s[i] == '3')
        {
            y++;
        }
    }
    sum %= 9;
    bool flag = 0;
    for (int i = 0; !flag && i <= min(1ll * 9, x); i++)
    {
        for (int j = 0; !flag && j <= min(1ll * 2, y); j++)
        {
            if ((sum + 2 * i + 6 * j) % 9 == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}