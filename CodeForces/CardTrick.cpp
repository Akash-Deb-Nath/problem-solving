#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    ll n, m, count = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
    {
        cin >> x;
    }
    cin >> m;
    vector<ll> b(m);
    for (ll &x : b)
    {
        cin >> x;
        count = (count + x) % n;
    }
    cout << a[count] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
