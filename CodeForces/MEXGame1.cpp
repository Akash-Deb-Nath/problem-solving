#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n, 0);
    for (auto &i : a)
    {
        cin >> i;
        b[i]++;
    }
    bool flag = 0;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            cout << i << "\n";
            return;
        }
        if (b[i] == 1 && flag == 0)
        {
            flag = 1;
        }
        else if (b[i] == 1 && flag)
        {
            cout << i << "\n";
            return;
        }
    }
    cout << n << "\n";
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