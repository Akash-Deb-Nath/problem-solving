#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll b[m];
    for (ll i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    sort(b + 1, b + m + 1);
    ll p = min(a[1], b[1] - a[1]);
    for (ll i = 2; i <= n; i++)
    {
        if (max(b[m] - a[i], a[i]) < p)
        {
            cout << "NO" << "\n";
            return;
        }
        ll pos = lower_bound(b + 1, b + m + 1, p + a[i]) - b;
        if (pos > m)
        {
            p = a[i];
        }
        else if (a[i] >= p)
        {
            p = min(b[pos] - a[i], a[i]);
        }
        else
        {
            p = b[pos] - a[i];
        }
    }
    cout << "YES" << "\n";
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