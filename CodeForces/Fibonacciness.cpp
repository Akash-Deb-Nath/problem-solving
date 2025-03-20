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
        ll a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        vector<ll> a3(3);
        a3[0] = a1 + a2;
        a3[1] = a4 - a2;
        a3[2] = a5 - a4;
        ll ans = 0;
        for (auto a3 : a3)
        {
            ll temp = 0;
            if (a3 == a1 + a2)
            {
                temp++;
            }
            if (a4 == a3 + a2)
            {
                temp++;
            }
            if (a5 == a3 + a4)
            {
                temp++;
            }
            ans = max(ans, temp);
        }
        cout << ans << "\n";
    }

    return 0;
}