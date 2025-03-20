#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (auto &i : s)
    {
        cin >> i;
    }
    ll ans = 0;
    for (ll layer = 0; layer < min(n, m) / 2; layer++)
    {
        string t;
        for (ll i = layer; i < m - 1 - layer; i++)
        {
            t += s[layer][i];
        }
        for (ll i = layer; i < n - 1 - layer; i++)
        {
            t += s[i][m - 1 - layer];
        }
        for (ll i = m - 1 - layer; i > layer; i--)
        {
            t += s[n - 1 - layer][i];
        }
        for (ll i = n - 1 - layer; i > layer; i--)
        {
            t += s[i][layer];
        }
        t += t;
        for (ll i = 0; i < t.size() / 2; i++)
        {
            ans += (t.substr(i, 4) == "1543");
        }
    }
    cout << ans << "\n";
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