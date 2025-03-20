#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll zero, one, sum = 0;
    ll a[100][100];
    for (ll i = 1; i <= n; i++)
    {
        zero = 0;
        one = 0;
        for (ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        sum += ((1ll << zero) - 1) + ((1ll << one) - 1);
    }
    for (ll i = 1; i <= m; i++)
    {
        zero = 0;
        one = 0;
        for (ll j = 1; j <= n; j++)
        {
            if (a[j][i] == 0)
            {
                zero++;
            }
            else
                one++;
        }
        sum += ((1ll << zero) - 1) + ((1ll << one) - 1);
    }
    ll ans = sum - (m * n);
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