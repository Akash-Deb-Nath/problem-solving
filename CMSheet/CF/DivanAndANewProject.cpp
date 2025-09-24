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
    vector<pair<ll, ll>> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x.pb({a[i], i + 1});
    }
    dsort(x);
    vector<ll> ans(n + 1);
    ans[0] = 0;
    ll walk = 0;
    ll cnt = 1;
    for (ll i = 1; i <= n; i += 2)
    {
        ans[x[i - 1].S] = -cnt;
        if (i == n)
        {
            walk += (2 * x[i - 1].F * cnt);
            break;
        }
        ans[x[i].S] = cnt;
        walk += (2 * x[i - 1].F * cnt);
        walk += (2 * x[i].F * cnt);
        cnt++;
    }
    dekhao(walk);
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