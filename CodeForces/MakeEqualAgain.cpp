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
        ll ans = n;
        for (auto x : {a[0], a[n - 1]})
        {
            ll l = 0, r = n;
            while (l < n && a[l] == x)
            {
                l++;
            }
            while (r > 0 && a[r - 1] == x)
            {
                r--;
            }
            ans = min(ans, max(1ll * 0, r - l));
        }
        cout << ans << "\n";
    }

    return 0;
}