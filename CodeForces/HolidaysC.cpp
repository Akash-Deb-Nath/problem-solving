#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v;
    map<ll, ll> mp;
    loop(i, 0, m)
    {
        ll a, b;
        cin >> a >> b;
        v.pb({a, b});
        if (a == b)
        {
            mp[a]++;
        }
        else
        {
            mp[a]++;
            mp[b]++;
        }
    }
    ll prev = 0;
    loop(i, 0, m)
    {
        if (v[i].F - prev == 0)
        {
            cout << prev << " " << mp[v[i].F] << "\n";
            return;
        }
        else if (v[i].F - prev > 1)
        {
            cout << prev + 1 << " " << 0 << "\n";
            return;
        }
        prev = v[i].S;
    }
    if (n - prev != 0)
    {
        cout << prev + 1 << " " << 0 << "\n";
    }
    else
    {
        cout << "OK" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}