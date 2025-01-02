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
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        vector<ll> b(n);
        for (auto &i : b)
        {
            cin >> i;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += max(a[i], b[i]);
        }
        ll mx = LONG_LONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            mx = max(mx, min(a[i], b[i]));
        }
        ans = ans + mx;
        cout << ans << endl;
    }

    return 0;
}