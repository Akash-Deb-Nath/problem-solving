#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> count(64, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ll MSB = 63 - __builtin_clzll(a[i]);
            ++count[MSB];
        }
        ll ans = 0;
        cout << endl;
        for (ll i = 0; i < 64; i++)
        {
            ans += count[i] * (count[i] - 1) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}