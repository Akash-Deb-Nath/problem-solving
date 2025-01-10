#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
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
        ll n;
        cin >> n;
        vector<ll> k(n);
        ll res = 1;
        for (auto &i : k)
        {
            cin >> i;
            res = lcm(res, i);
        }
        ll sum = 0;
        for (auto &i : k)
        {
            sum += (res / i);
        }
        if (sum < res)
        {
            for (auto &i : k)
            {
                cout << res / i << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}