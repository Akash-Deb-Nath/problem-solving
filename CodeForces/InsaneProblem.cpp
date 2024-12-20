#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll solve(ll k, ll l1, ll r1, ll l2, ll r2)
{
    ll ans = 0, x = 1;
    while (x <= 1e9)
    {
        ll R = min(r2 / x, r1);
        ll L = max((l2 + x - 1) / x, l1);
        ans = ans + max(R - L + 1, 0ll);
        x = x * k;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        ll res = solve(k, l1, r1, l2, r2);
        cout << res << endl;
    }

    return 0;
}