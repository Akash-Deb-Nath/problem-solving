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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    map<ll, ll> mp;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mp[i] = a[i];
    }
    ll val = 0;
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll i, x;
            cin >> i >> x;
            if (mp.find(i) == mp.end())
            {
                sum += x - val;
            }
            else
            {
                sum += x - mp[i];
            }
            mp[i] = x;
        }
        else
        {
            ll x;
            cin >> x;
            mp.clear();
            sum = x * n;
            val = x;
        }
        cout << sum << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}