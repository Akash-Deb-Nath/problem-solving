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
    ll n, m;
    cin >> n >> m;
    multiset<ll> tickets;
    for (ll i = 0; i < n; ++i)
    {
        ll h;
        cin >> h;
        tickets.insert(h);
    }
    for (ll i = 0; i < m; ++i)
    {
        ll t;
        cin >> t;
        auto it = tickets.upper_bound(t);
        if (it == tickets.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << *(--it) << "\n";
            tickets.erase(it);
        }
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