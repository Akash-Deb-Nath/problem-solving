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
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n;
    cin >> n;
    vector<ll> p(n);
    vector<pair<ll, ll>> temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        temp.pb({p[i], i + 1});
    }
    asort(temp);
    ll one = upper_bound(all(temp), make_pair(1ll, LONG_LONG_MAX)) - temp.begin();
    ll two = upper_bound(all(temp), make_pair(2ll, LONG_LONG_MAX)) - temp.begin();
    ll mx = upper_bound(all(temp), make_pair(n, LONG_LONG_MAX)) - temp.begin();
    ll f = temp[one - 1].S;
    ll s = temp[two - 1].S;
    ll m = temp[mx - 1].S;
    if (m < min(f, s))
    {
        cout << m << " " << min(f, s) << "\n";
        return;
    }
    else if (m > max(f, s))
    {
        cout << m << " " << max(f, s) << "\n";
        return;
    }
    else
    {
        cout << m << " " << m << "\n";
        return;
    }
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