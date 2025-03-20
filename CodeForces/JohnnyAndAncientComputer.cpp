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
        ll a, b;
        cin >> a >> b;
        if (a < b)
        {
            swap(a, b);
        }
        ll ans = 0;
        if (a % b == 0)
        {
            a /= b;
            while (1)
            {
                if (a % 8 == 0)
                {
                    a /= 8;
                }
                else if (a % 4 == 0)
                {
                    a /= 4;
                }
                else if (a % 2 == 0)
                {
                    a /= 2;
                }
                else if (a == 1)
                {
                    break;
                }
                else
                {
                    ans = -1;
                    break;
                }
                ans++;
            }
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}