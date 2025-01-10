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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        ll x = 0;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                x++;
            }
            if (a[i] > q || i == n - 1)
            {
                if (x >= k)
                {
                    ll temp = x - k + 1;
                    ans = ans + (temp * (temp + 1) / 2);
                }
                x = 0;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}