#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

ll XORificator(ll n)
{
    if (n % 4 == 0)
    {
        return 0;
    }
    else if (n % 4 == 1)
    {
        return n - 1;
    }
    else if (n % 4 == 2)
    {
        return 1;
    }
    else
    {
        return n;
    }
}

void solve()
{
    ll l, r, i, k;
    cin >> l >> r >> i >> k;
    r++;
    ll ans = 0;
    ans ^= XORificator(r);
    ans ^= XORificator(l);
    r = (r - k + (1LL << i) - 1) >> i;
    l = (l - k + (1LL << i) - 1) >> i;
    ans ^= XORificator(r) << i;
    ans ^= XORificator(l) << i;
    if ((l ^ r) & 1)
    {
        ans ^= k;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}