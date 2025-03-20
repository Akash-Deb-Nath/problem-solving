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
        ll n;
        cin >> n;
        if (n <= 5)
        {
            cout << n / 2 + 1 << "\n";
            for (ll i = 0; i < n; i++)
            {
                cout << (i + 3) / 2 << " \n"[i == n - 1];
            }
        }
        else
        {
            cout << 4 << "\n";
            for (ll i = 0; i < n; i++)
            {
                cout << i % 4 + 1 << " \n"[i == n - 1];
            }
        }
    }

    return 0;
}