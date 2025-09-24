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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    ll ans = n;
    ll last = -1;
    ll cnt = 0;
    for (auto &i : mp)
    {
        if (i.F == last + 1)
        {
            ans -= min(i.S, cnt);
        }
        last = i.F;
        cnt = i.S;
    }
    cout << ans << '\n';
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