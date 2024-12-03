#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        ll ans = a[0];
        for (ll i = 1; i < n; i++)
        {
            ans = max(ans, a[i] - a[i - 1]);
        }
        ans = max(ans, 2 * (x - a[n - 1]));
        cout << ans << endl;
    }

    return 0;
}