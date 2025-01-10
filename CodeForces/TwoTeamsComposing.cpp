#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> cnt(n);
        for (ll i = 0; i < n; ++i)
        {
            ll a;
            cin >> a;
            ++cnt[a - 1];
        }
        ll d = 0, mx = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (cnt[i] > 0)
            {
                d++;
            }
            mx = max(mx, cnt[i]);
        }
        cout << min(d, mx) - (d == mx) << "\n";
    }

    return 0;
}