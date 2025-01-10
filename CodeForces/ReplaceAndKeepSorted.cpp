#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q, k;
    cin >> n >> q >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll ans = 0;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ans = k + (a[r - 1] - a[l - 1] + 1) - 2 * (r - l + 1);
        cout << ans << "\n";
    }

    return 0;
}