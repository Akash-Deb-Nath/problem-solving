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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = a[i] + a[i - 1];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll ans = a[n] - (a[r] - a[l - 1]) + ((r - l + 1) * k);
            if (ans & 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}