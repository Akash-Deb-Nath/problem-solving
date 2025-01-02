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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        if (n == 1)
        {
            a[0] = k;
        }
        else
        {
            ll msb = 0;
            for (int i = 0; i < 31; i++)
            {
                if (k & (1 << i))
                {
                    msb = i;
                }
            }
            a[0] = (1 << msb) - 1;
            a[1] = k - a[0];
            for (ll i = 2; i < n; i++)
            {
                a[i] = 0;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}