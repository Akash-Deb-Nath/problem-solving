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
    vector<ll> l(n);
    for (auto &i : l)
    {
        cin >> i;
    }
    vector<ll> r(n);
    for (auto &i : r)
    {
        cin >> i;
    }
    ll ans = 0;
    vector<ll> temp;
    for (ll i = 0; i < n; i++)
    {
        ans += max(l[i], r[i]);
        temp.pb(min(l[i], r[i]));
    }
    dsort(temp);
    for (ll i = 0; i < k - 1; i++)
    {
        ans += temp[i];
    }
    ans = ans + 1;
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