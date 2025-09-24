#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (!is_sorted(a.begin(), a.end()))
    {
        cout << 0 << "\n";
        return;
    }
    ll diff = LONG_LONG_MAX;
    for (ll i = 1; i < n; i++)
    {
        diff = min(diff, a[i] - a[i - 1]);
    }
    ll ans = 1;
    ans += diff / 2;
    cout << ans << "\n";
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