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
        cout << 1 << " " << 1 << "\n";
        for (ll i = 1; i < (n + 1) / 2; i++)
        {
            cout << 1 << " " << n - i << "\n";
        }
        for (ll i = 0; i < n - (n + 1) / 2; i++)
        {
            cout << n << " " << n - i << "\n";
        }
    }

    return 0;
}