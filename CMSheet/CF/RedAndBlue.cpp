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
    vector<ll> r(n);
    for (auto &i : r)
    {
        cin >> i;
    }
    ll m;
    cin >> m;
    vector<ll> b(m);
    for (auto &i : b)
    {
        cin >> i;
    }
    vector<ll> preR(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        preR[i] = preR[i - 1] + r[i - 1];
    }
    ll m1 = *max_element(preR.begin(), preR.end());
    vector<ll> preB(m + 1);
    for (ll i = 1; i <= m; i++)
    {
        preB[i] = preB[i - 1] + b[i - 1];
    }
    ll m2 = *max_element(preB.begin(), preB.end());
    ll ans = m1 + m2;
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