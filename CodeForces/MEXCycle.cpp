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
        ll n, x, y;
        cin >> n >> x >> y;
        x--;
        y--;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            a[(x + i) % n] = i % 2;
        }
        if (n % 2 || (x - y) % 2 == 0)
        {
            a[x] = 2;
        }
        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}