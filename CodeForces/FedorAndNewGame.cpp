#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll countSetBits(ll n)
{
    ll count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    m++;
    vector<ll> x(m);
    for (auto &i : x)
    {
        cin >> i;
    }
    ll p = x.back();
    bitset<31> fedor(p);
    m--;
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        bitset<31> temp(x[i]);
        ll cnt = 0;
        for (ll j = 0; j < 31; j++)
        {
            if (fedor[j] != temp[j])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}