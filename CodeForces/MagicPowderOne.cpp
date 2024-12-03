#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool canBaked(ll numOfCookie, ll n, vector<ll> &a, vector<ll> &b, ll magicPowder)
{
    ll extraRequired = 0;
    for (ll i = 0; i < n; i++)
    {
        ll needed = a[i] * numOfCookie;
        if (needed > b[i])
        {
            extraRequired += needed - b[i];
        }
        if (extraRequired > magicPowder)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n), res;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll s = 0, e = 2e9;
    while (s < e)
    {
        ll mid = s + (e - s + 1) / 2;
        if (canBaked(mid, n, a, b, k))
        {
            s = mid;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << s << endl;

    return 0;
}