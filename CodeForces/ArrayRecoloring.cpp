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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (k == 1)
    {
        ll mx = max(a.front(), a.back());
        ll ans = a.front() + a.back();
        for (ll i = 1; i < n - 1; i++)
        {
            ans = max(ans, a[i] + mx);
        }
        cout << ans << "\n";
        return;
    }
    dsort(a);
    ll ans = 0;
    for (ll i = 0; i < k + 1; i++)
    {
        ans += a[i];
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