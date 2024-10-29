#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll minX, minY, maxX, maxY;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (!i)
        {
            minX = x;
            maxX = x;
            minY = y;
            maxY = y;
        }
        minX = min(x, minX);
        maxX = max(x, maxX);
        minY = min(y, minY);
        maxY = max(y, maxY);
    }
    ll x = maxX - minX, y = maxY - minY;
    ll a = max(x, y);
    ll ans = a * a;
    cout << ans << endl;

    return 0;
}