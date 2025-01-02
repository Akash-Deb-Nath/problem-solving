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
        ll ans = 0;
        for (ll i = 1; i < n; i++)
        {
            a[i] = a[i] + a[i - 1];
        }
        for (ll i = 0; i < n; i++)
        {
            ll root = sqrt(a[i]);
            if (root * root == a[i] && root & 1)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}