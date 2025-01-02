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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll total = a + b + c;

        ll ans = 3 * (n / total);

        n %= total;

        if (n > 0)
        {
            if (n <= a)
            {
                ans += 1;
            }
            else if (n <= a + b)
            {
                ans += 2;
            }
            else
            {
                ans += 3;
            }
        }

        cout << ans << endl;
    }

    return 0;
}