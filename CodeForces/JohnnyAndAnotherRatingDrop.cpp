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
        ll temp = n;
        ll setBit = 0;
        while (temp)
        {
            if (temp & 1)
            {
                setBit++;
            }
            temp >>= 1;
        }
        ll ans = 2 * n - setBit;
        cout << ans << "\n";
    }

    return 0;
}