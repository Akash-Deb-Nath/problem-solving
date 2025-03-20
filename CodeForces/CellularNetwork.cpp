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
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> b(m);
    for (auto &i : b)
    {
        cin >> i;
    }
    ll r = 0;
    for (ll i = 0; i < n; i++)
    {
        ll index = lower_bound(b.begin(), b.end(), a[i]) - b.begin() - 1;
        ll d = 2e9 + 5;
        if (index >= 0)
        {
            d = min(d, a[i] - b[index]);
        }
        if (index + 1 < m)
        {
            d = min(d, b[index + 1] - a[i]);
        }
        r = max(r, d);
    }
    cout << r << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}