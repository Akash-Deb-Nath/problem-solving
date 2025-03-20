#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum <= x)
        {
            ans += ((x - sum) / (i + 1)) + 1;
        }
    }
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