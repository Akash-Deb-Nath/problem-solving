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
        for (ll &i : a)
        {
            cin >> i;
        }
        n = unique(a.begin(), a.end()) - a.begin();
        ll ans = n;
        for (ll i = 0; i + 2 < n; i++)
        {
            ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
            ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
        }
        cout << ans << '\n';
    }
    return 0;
}