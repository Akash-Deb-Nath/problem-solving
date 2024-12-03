#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = 0;
        ll temp = n;
        while (temp >= 10)
        {
            res++;
            temp = temp / 10;
        }
        ll x = 1;
        ll r = res;
        while (res)
        {
            x = x * 10;
            res--;
        }
        ll ans = 0;
        if (n < 10)
        {
            ans = n;
        }
        else
        {
            ans = r * 9 + (n / x);
        }
        cout << ans << endl;
    }

    return 0;
}
