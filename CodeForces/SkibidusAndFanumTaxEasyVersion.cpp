#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

bool isPossible(ll n, vector<ll> &a, ll bVal)
{
    if (n == 0)
    {
        return true;
    }
    ll temp = min(a[0], bVal - a[0]);
    for (ll i = 1; i < n; ++i)
    {
        vector<ll> x;
        if (a[i] >= temp)
        {
            x.push_back(a[i]);
        }
        if (bVal - a[i] >= temp)
        {
            x.push_back(bVal - a[i]);
        }
        if (x.empty())
        {
            return false;
        }
        temp = *min_element(x.begin(), x.end());
    }
    return true;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<ll> b(m);
    for (ll i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    ll bVal = b[0];
    if (isPossible(n, a, bVal))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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