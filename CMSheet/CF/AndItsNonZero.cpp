#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll N = 200000;
vector<vector<ll>> bit(31, vector<ll>(N + 1));

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll temp = 0;
    for (ll i = 0; i < 31; i++)
    {
        temp = max(temp, bit[i][r] - bit[i][l - 1]);
    }
    ll ans = (r - l + 1) - temp;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (ll i = 0; i < 31; i++)
    {
        for (ll j = 1; j <= N; j++)
        {
            bit[i][j] = bit[i][j - 1] + ((j & (1 << i)) ? 1 : 0);
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}