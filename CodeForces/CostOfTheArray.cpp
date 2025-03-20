#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans;
    if (n == k)
    {
        ans = n / 2 + 1;
        for (ll i = 2; i <= n; i += 2)
        {
            if (a[i] != i / 2)
            {
                ans = i / 2;
                cout << ans << "\n";
                return;
            }
        }
        cout << ans << "\n";
    }
    else
    {
        bool flag = 0;
        for (ll i = 2; i <= n - k + 2; i++)
        {
            if (a[i] != 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            ll ans = 2;
            for (ll i = n - k + 1; i <= n; i += 2)
            {
                if (a[i] != ans)
                {
                    cout << ans << "\n";
                    return;
                }
                ans++;
            }
        }
        else
        {
            cout << 1 << endl;
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