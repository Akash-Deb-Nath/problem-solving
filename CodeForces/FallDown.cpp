#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        char g[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> g[i][j];
            }
        }
        for (ll j = 0; j < m; j++)
        {
            ll last = n - 1;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (g[i][j] == 'o')
                {
                    last = i - 1;
                }
                else if (g[i][j] == '*')
                {
                    swap(g[i][j], g[last][j]);
                    last--;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << g[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}