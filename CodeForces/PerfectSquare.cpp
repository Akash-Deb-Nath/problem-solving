#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<vector<char>> matrix(n, vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < n / 2; j++)
        {
            vector<char> a;
            a.push_back(matrix[i][j]);
            a.push_back(matrix[j][n - i - 1]);
            a.push_back(matrix[n - i - 1][n - j - 1]);
            a.push_back(matrix[n - j - 1][i]);
            sort(a.begin(), a.end());
            ans += (3 * a[3] - a[2] - a[1] - a[0]);
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