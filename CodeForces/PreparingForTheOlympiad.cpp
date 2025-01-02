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
        vector<ll> b(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &i : b)
        {
            cin >> i;
        }
        ll ans = 0, mx = 0, mn = 0;
        for (ll i = 0; i + 1 < n; i++)
        {
            if (a[i] >= b[i + 1])
            {
                mx = mx + a[i];
                mn = mn + b[i + 1];
            }
        }
        mx = mx + a.back();
        ans = abs(mx - mn);
        cout << ans << endl;
    }

    return 0;
}