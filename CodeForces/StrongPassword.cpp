#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    string s;
    cin >> s;
    ll m;
    cin >> m;
    string l, r;
    cin >> l >> r;
    ll index = 0;
    for (ll i = 0; i < m; i++)
    {
        ll x = index;
        for (char ch = l[i]; ch <= r[i]; ch++)
        {
            if (s.find(ch, index) == -1)
            {
                cout << "YES" << "\n";
                return;
            }
            x = max(x, 1ll * int(s.find(ch, index)) + 1);
        }
        index = x;
    }
    cout << "NO" << "\n";
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