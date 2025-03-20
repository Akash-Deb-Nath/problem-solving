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
        string s;
        cin >> s;
        vector<vector<ll>> a(n, vector<ll>(m));
        vector<ll> sum(n, 0);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
                sum[i] += a[i][j];
            }
        }
        ll total = sum[0];
        vector<vector<bool>> b(n, vector<bool>(m, false));
        ll l = 0, r = 0;
        b[l][r] = true;

        for (char ch : s)
        {
            if (ch == 'D')
            {
                if (l + 1 < n)
                    l++;
            }
            else if (ch == 'R')
            {
                if (r + 1 < m)
                    r++;
            }
            b[l][r] = true;
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (b[i][j] && i == 0)
                {
                    a[i][j] = 1;
                    total += 1;
                }
                if (b[i][j] && i != 0)
                {
                    if ((i + 1 < n && b[i + 1][j]) || (j + 1 < m && b[i][j + 1]))
                    {
                        if (b[i][j] && j != m - 1)
                        {
                            a[i][j] = 1;
                            sum[i]++;
                        }
                        else
                        {
                            a[i][j] = total - sum[i];
                        }
                    }
                    else
                    {
                        a[i][j] = total - sum[i];
                    }
                }
            }
        }

        cout << "ans" << "\n";
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
