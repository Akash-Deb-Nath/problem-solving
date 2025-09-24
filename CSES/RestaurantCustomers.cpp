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
    vector<pair<ll, ll>> times;
    for (ll i = 0; i < n; i++)
    {
        ll arrival, departure;
        cin >> arrival >> departure;
        times.pb({arrival, 1});
        times.pb({departure, -1});
    }
    sort(times.begin(), times.end());
    ll cur = 0, mx = 0;
    for (ll i = 0; i < times.size(); i++)
    {
        cur += times[i].S;
        mx = max(mx, cur);
    }
    cout << mx << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}