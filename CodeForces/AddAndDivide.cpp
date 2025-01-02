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
        ll a, b;
        cin >> a >> b;
        ll ans = 1e9;
        for (ll i = 0; i < 30; i++)
        {
            if (b + i == 1)
            {
                continue;
            }
            ll res = i;
            ll x = a;
            while (x > 0)
            {
                x /= b + i;
                res++;
            }
            ans = min(ans, res);
        }
        cout << ans << "\n";
    }

    return 0;
}