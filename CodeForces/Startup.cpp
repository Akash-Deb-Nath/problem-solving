#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(k + 1);
        for (ll i = 0; i < k; i++)
        {
            ll b, c;
            cin >> b >> c;
            b--;
            a[b] += c;
        }
        sort(a.rbegin(), a.rend());
        ll ans = 0;
        for (ll i = 0; i < min(n, k); i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }

    return 0;
}