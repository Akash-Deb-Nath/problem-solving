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
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    ll num = 1;
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            a[i][j] = num++;
        }
    }
    vector<vector<ll>> temp;
    for (ll i = 1; i < n; i += 2)
    {
        temp.pb(a[i]);
    }
    for (ll i = 0; i < n; i += 2)
    {
        temp.pb(a[i]);
    }
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            cout << temp[i][j] << " ";
        }
        cout << "\n";
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