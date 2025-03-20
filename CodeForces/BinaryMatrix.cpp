#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll rows = 0;
    for (ll i = 0; i < n; i++)
    {
        ll one = 0;
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == '1')
            {
                one++;
            }
        }
        if (one & 1)
        {
            rows++;
        }
    }
    ll cols = 0;
    for (ll i = 0; i < m; i++)
    {
        ll one = 0;
        for (ll j = 0; j < n; j++)
        {
            if (s[j][i] == '1')
            {
                one++;
            }
        }
        if (one & 1)
        {
            cols++;
        }
    }
    cout << max(rows, cols) << "\n";
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