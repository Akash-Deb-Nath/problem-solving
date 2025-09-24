#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (n == 2)
    {
        cout << __gcd(a[0], a[1]) << " 2" << "\n";
        return;
    }
    map<ll, ll> curGCD;
    ll maxGCD = 0, maxLength = 0;
    for (ll i = 0; i < n; i++)
    {
        map<ll, ll> newGCD;
        newGCD[a[i]] = 1;
        for (auto [g, len] : curGCD)
        {
            ll newG = __gcd(g, a[i]);
            newGCD[newG] = max(newGCD[newG], len + 1);
        }
        curGCD = newGCD;
        for (auto [g, len] : curGCD)
        {
            if (len > 1)
            {
                if (g > maxGCD || (g == maxGCD && len > maxLength))
                {
                    maxGCD = g;
                    maxLength = len;
                }
            }
        }
    }
    cout << maxGCD << " " << maxLength << "\n";
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