#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> x(n);
    for (auto &i : x)
    {
        cin >> i;
    }
    vector<ll> p(m);
    for (auto &i : p)
    {
        cin >> i;
    }
    ll g = x[1] - x[0];
    for (ll i = 2; i < n; i++)
    {
        g = __gcd(g, x[i] - x[i - 1]);
    }
    for (ll i = 0; i < m; i++)
    {
        if (g % p[i] == 0)
        {
            cout << "YES" << "\n";
            cout << x[0] << " " << i + 1 << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";

    return 0;
}