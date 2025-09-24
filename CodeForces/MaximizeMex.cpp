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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    asort(a);
    map<ll, ll> mp;
    ll j = 0;
    ll ans = 0;
    for (ll i = 0; i <= n; i++)
    {
        while (j < n && a[j] <= i)
        {
            mp[a[j] % x]++;
            j++;
        }
        if (mp[i % x])
        {
            mp[i % x]--;
            ans = i + 1;
        }
        else
        {
            break;
        }
    }
    dekhao(ans);
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