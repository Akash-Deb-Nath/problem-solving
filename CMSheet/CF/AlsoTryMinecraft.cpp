#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> pref(n, 0), suff(n, 0);
    for (ll i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + max(0LL, a[i - 1] - a[i]);
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + max(0LL, a[i + 1] - a[i]);
    }
    while (m--)
    {
        ll s, t;
        cin >> s >> t;
        ll ans = 0;
        if (s > t)
        {
            ans = suff[t - 1] - suff[s - 1];
        }
        else
        {
            ans = pref[t - 1] - pref[s - 1];
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    while (t--)
        solve();

    return 0;
}