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
    map<ll, ll> index;
    for (auto &i : a)
    {
        cin >> i;
    }
    for (ll i = 0; i < n; i++)
    {
        index[a[i]] = i + 1;
    }
    ll ans = -1;
    for (auto i : index)
    {
        for (auto j : index)
        {
            if (__gcd(i.first, j.first) == 1)
            {
                ans = max(ans, i.second + j.second);
            }
        }
    }
    cout << ans << "\n";
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