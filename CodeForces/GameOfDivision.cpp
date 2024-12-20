#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll i = 0, j = n - 1;
    for (ll i = 0; i < n; i++)
    {
        bool flag = 1;
        for (ll j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (abs(a[i] - a[j]) % k == 0)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "No" << endl;
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