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
    ll ans = 0;
    vector<ll> pre(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        // if (a[i] < 0)
        // {
        //     a[i] = 0;
        // }
        pre[i + 1] = pre[i] + max(0ll, a[i]);
    }
    vector<ll> suff(n + 1, 0);
    for (ll i = n - 1; i >= 0; i--)
    {
        // if (a[i] > 0)
        // {
        //     a[i] = 0;
        // }
        suff[i] = suff[i + 1] + max(0ll, -a[i]);
    }
    for (ll i = 0; i <= n; i++)
    {
        ans = max(ans, pre[i] + suff[i]);
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