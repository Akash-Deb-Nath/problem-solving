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
        ll x, y;
        cin >> x >> y;
        for (int i = 0; i < 30; i++)
        {
            if ((x & (1 << i)) != (y & (1 << i)))
            {
                cout << (1ll << i) << "\n";
                break;
            }
        }
    }

    return 0;
}