#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    ll ans = a[n - 1] - a[0];
    for (ll i = 0; i + 2 < n; i++)
    {
        ans = max(ans, a[n - 1] - a[i] + a[i + 1] - a[i]);
    }
    for (ll i = 2; i < n; i++)
    {
        ans = max(ans, a[i] - a[0] + a[i] - a[i - 1]);
    }
    cout << ans << '\n';
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