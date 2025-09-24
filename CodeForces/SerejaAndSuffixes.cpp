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
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> temp(n);
    ll cnt = 0;
    rloop(i, n - 1, 0)
    {
        if (mp.find(a[i]) == mp.end())
        {
            cnt++;
            mp[a[i]]++;
        }
        temp[i] = cnt;
    }
    while (m--)
    {
        ll l;
        cin >> l;
        cout << temp[l - 1] << "\n";
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