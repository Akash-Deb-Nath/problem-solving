#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll count = 0, g = 0;
    for (auto &i : a)
    {
        cin >> i;
        if (i == 1)
        {
            count++;
        }
        g = __gcd(g, i);
    }
    if (g != 1)
    {
        cout << -1 << "\n";
        return;
    }
    if (count)
    {
        cout << n - count << "\n";
        return;
    }
    ll temp = 0, mn = n;
    for (ll i = 0; i < n; i++)
    {
        temp = 0;
        for (ll j = i; j < n; j++)
        {
            temp = __gcd(temp, a[j]);
            if (temp == 1)
            {
                mn = min(mn, j - i);
                break;
            }
        }
    }
    cout << mn + n - 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}