#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll mod = 1000000007;

ll biexpo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    ll n, k;
    for (ll i = 0; i < t; i++)
    {
        cin >> n;
    }
    for (ll i = 0; i < t; i++)
    {
        cin >> k;
        cout << biexpo(2, k, mod) << "\n";
    }

    return 0;
}