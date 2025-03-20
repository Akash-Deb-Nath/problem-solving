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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> pre(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + (s[i - 1] == 'W');
        }
        ll ans = LONG_LONG_MAX;
        for (ll i = k; i <= n; i++)
        {
            ans = min(ans, pre[i] - pre[i - k]);
        }
        cout << ans << "\n";
    }

    return 0;
}