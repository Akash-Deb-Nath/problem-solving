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
    vector<ll> a(n);
    map<ll, ll> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    vector<ll> x, y;
    for (auto &i : mp)
    {
        if (i.S == 1)
        {
            x.pb(i.F);
        }
        else if (i.S == 2)
        {
            x.pb(i.F);
            y.pb(i.F);
        }
        else
        {
            no;
            return;
        }
    }
    reverse(all(x));
    yes;
    dekhao(y.size());
    for (auto &i : y)
    {
        cout << i << " ";
    }
    cout << "\n";
    dekhao(x.size());
    for (auto &i : x)
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
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}