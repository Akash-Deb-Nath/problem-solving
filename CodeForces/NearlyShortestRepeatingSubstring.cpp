#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (int k = 1; k <= n; k++)
    {
        if (n % k)
        {
            continue;
        }
        for (int i = 0; i < n && i <= k; i += k)
        {
            int ans = 0;
            for (int j = 0; j < n; j++)
            {
                ans += (s[i + j % k] != s[j]);
            }
            if (ans <= 1)
            {
                cout << k << "\n";
                return;
            }
        }
    }
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