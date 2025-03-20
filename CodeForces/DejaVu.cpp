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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        vector<ll> x(q);
        for (auto &i : x)
        {
            cin >> i;
        }
        ll mn = 1000;
        for (ll i = 0; i < q; i++)
        {
            if (x[i] >= mn)
            {
                continue;
            }
            mn = x[i];
            for (ll j = 0; j < n; j++)
            {
                if (a[j] % (1 << x[i]) == 0)
                {
                    a[j] += 1 << (x[i] - 1);
                }
            }
        }
        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}