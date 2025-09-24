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
    vector<ll> x(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        x[i] = y - x[i];
    }
    sort(x.begin(), x.end());
    ll p = lower_bound(x.begin(), x.end(), 0) - x.begin();
    ll ans = 0;
    for (ll i = 0, j = n - 1; i < p; i++)
    {
        if (j >= p && x[i] + x[j] >= 0)
        {
            ans++;
            j--;
        }
    }
    ans += (n - p - ans) / 2;
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