#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    vector<ll> color(n * m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
            a[i][j]--;
            color[a[i][j]] = std::max(color[a[i][j]], 1ll);
            if ((i && a[i][j] == a[i - 1][j]) || (j && a[i][j] == a[i][j - 1]))
            {
                color[a[i][j]] = 2;
            }
        }
    }
    ll ans = accumulate(color.begin(), color.end(), 0ll) - *max_element(color.begin(), color.end());
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