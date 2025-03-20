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
        ll n;
        cin >> n;
        vector<string> g(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> g[i];
        }
        vector<ll> ans(n);
        for (ll i = 0; i < n; i++)
        {
            ll cnt = 0;
            for (ll j = 0; j < n; j++)
            {
                if (g[i][j] == '1')
                {
                    if (j < i)
                    {
                        cnt++;
                    }
                }
                else
                {
                    if (j > i)
                    {
                        cnt++;
                    }
                }
            }
            ans[cnt] = i + 1;
        }
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}