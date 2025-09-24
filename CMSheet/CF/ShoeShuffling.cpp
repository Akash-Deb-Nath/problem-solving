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
    vector<ll> s(n);
    map<ll, ll> mp;
    vector<pair<ll, ll>> a;
    ll index = 1;
    for (auto &i : s)
    {
        cin >> i;
        mp[i]++;
        a.pb({i, index});
        index++;
    }
    asort(a);
    for (auto &i : mp)
    {
        if (i.S < 2)
        {
            dekhao(-1);
            return;
        }
    }
    loop(i, 0, n - 1)
    {
        if (a[i].F == a[i + 1].F)
        {
            swap(a[i], a[i + 1]);
        }
    }
    vector<ll> ans;
    for (auto &i : a)
    {
        ans.pb(i.S);
    }
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    cout << "\n";
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