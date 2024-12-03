#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1 || n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        string ans;
        if ((n & 1) && n > 3)
        {
            for (ll i = 0; i < n - 5; i++)
            {
                ans = ans + '3';
            }
            ans = ans + "36366";
        }
        else if (n % 2 == 0)
        {
            for (ll i = 0; i < n - 2; i++)
            {
                ans = ans + '3';
            }
            ans = ans + "66";
        }
        cout << ans << endl;
    }
    return 0;
}