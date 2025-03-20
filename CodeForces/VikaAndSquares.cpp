#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LONG_LONG_MAX;
    for (auto &i : a)
    {
        cin >> i;
        if (i < mn)
        {
            mn = i;
        }
    }
    ll ans = mn * n;
    ll cnt = 0, mx = 0;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll j = i >= n ? i - n : i;
        if (a[j] > mn)
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    ans += mx;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}