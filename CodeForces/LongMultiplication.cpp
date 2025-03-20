#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    string x, y;
    cin >> x >> y;
    int flag = 0;
    ll n = x.size();
    string ans1, ans2;
    for (ll i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            if (x[i] == y[i])
            {
                ans1 += x[i];
                ans2 += x[i];
            }
            else if (x[i] > y[i])
            {
                flag = 1;
                ans1 += x[i];
                ans2 += y[i];
            }
            else
            {
                flag = 1;
                ans1 += y[i];
                ans2 += x[i];
            }
        }
        else
        {
            if (x[i] > y[i])
            {
                ans1 += y[i];
                ans2 += x[i];
            }
            else
            {
                ans1 += x[i];
                ans2 += y[i];
            }
        }
    }
    cout << ans1 << "\n";
    cout << ans2 << "\n";
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