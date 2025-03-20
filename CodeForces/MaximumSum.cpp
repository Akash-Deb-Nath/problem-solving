#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> pref(n + 1);
        for (ll i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + a[i];
        }
        ll ans = 0;
        for (ll i = 0; i <= k; i++)
        {
            ll x = k - i;
            ans = max(ans, pref[n - x] - pref[2 * i]);
        }
        cout << ans << '\n';
    }

    return 0;
}