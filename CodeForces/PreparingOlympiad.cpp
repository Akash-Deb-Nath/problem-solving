#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<ll> c(n);
    for (auto &i : c)
    {
        cin >> i;
    }
    ll ans = 0;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                mx = max(mx, c[j]);
                mn = min(mn, c[j]);
                sum += c[j];
            }
        }
        if (sum >= l && sum <= r && (mx - mn) >= x)
        {
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}