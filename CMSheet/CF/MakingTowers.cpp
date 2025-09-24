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
    vector<ll> c(n);
    map<ll, vector<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
        mp[c[i]].pb(i);
    }
    vector<ll> ans(n, 0);
    for (auto i : mp)
    {
        ll temp = 1;
        vector<ll> diff = i.S;
        for (ll i = 1; i < diff.size(); i++)
        {
            if ((diff[i] - diff[i - 1]) % 2)
            {
                temp++;
            }
        }
        ans[i.F - 1] = temp;
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