#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    x--, y--;
    vector<ll> a(n);
    ll temp = -1;
    for (ll i = y - 1; i >= 0; i--)
    {
        a[i] = temp;
        temp = -temp;
    }
    temp = -1;
    for (ll i = x + 1; i < n; i++)
    {
        a[i] = temp;
        temp = -temp;
    }
    for (ll i = y; i <= x; i++)
    {
        a[i] = 1;
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
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