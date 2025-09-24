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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> bitFreq(40, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 40; j++)
        {
            if ((a[i] >> j) & 1ll)
            {
                bitFreq[j]++;
            }
        }
    }
    ll x = 0;
    for (ll i = 39; i >= 0; i--)
    {
        if ((x ^ (1ll << i)) > k)
        {
            continue;
        }
        if (bitFreq[i] < (n - bitFreq[i]))
        {
            x ^= (1ll << i);
        }
    }
    ll ans = 0;
    for (auto i : a)
    {
        ans += (x ^ i);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}