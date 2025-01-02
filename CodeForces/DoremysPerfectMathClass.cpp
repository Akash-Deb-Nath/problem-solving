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
        ll g = 0;
        for (auto &i : a)
        {
            cin >> i;
            g = __gcd(g, i);
        }
        ll ans = 0;
        ans = a[n - 1] / g;
        cout << ans << "\n";
    }

    return 0;
}