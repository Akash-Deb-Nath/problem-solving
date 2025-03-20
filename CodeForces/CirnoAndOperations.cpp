#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll ans = accumulate(a.begin(), a.end(), 0ll);
    while (a.size() > 1)
    {
        vector<ll> b(a.size() - 1);
        for (ll i = 0; i < a.size() - 1; i++)
        {
            b[i] = a[i + 1] - a[i];
        }
        a = b;
        ans = max(ans, abs(accumulate(a.begin(), a.end(), 0ll)));
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