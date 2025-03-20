#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll len = 0;
        while (x % 10 == 0)
        {
            len++;
            x /= 10;
        }
        a[i] = len;
        while (x > 0)
        {
            total++;
            x /= 10;
        }
    }
    sort(a.rbegin(), a.rend());
    for (ll i = 1; i < n; i += 2)
    {
        total += a[i];
    }
    if (total >= m + 1)
    {
        cout << "Sasha" << "\n";
    }
    else
    {
        cout << "Anna" << "\n";
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