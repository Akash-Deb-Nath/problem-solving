#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    ll ans = 0, bought = 0;
    for (ll i = 0; i < n && bought < k; i++)
    {
        ll need = min(m, k - bought);
        ans += (a[i] + bought) * need;
        bought += need;
    }
    cout << ans << '\n';
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
        solve();
    }

    return 0;
}