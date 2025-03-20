#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll sum = 0;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll d = sum - a[i];
        ll mn = d - y;
        ll mx = d - x;
        ll l = lower_bound(a.begin(), a.end(), mn) - a.begin();
        ll r = upper_bound(a.begin(), a.end(), mx) - a.begin();
        ans += (r - l);
        if (i >= l && i < r)
        {
            ans--;
        }
    }
    cout << ans / 2 << '\n';
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