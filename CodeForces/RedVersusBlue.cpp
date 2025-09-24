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
    ll n, r, b;
    cin >> n >> r >> b;
    ll x = r / (b + 1);
    ll y = r % (b + 1);
    string ans;
    for (ll i = 0; i < (b + 1); i++)
    {
        for (ll j = 0; j < x + (y > 0); j++)
        {
            ans += "R";
        }
        y--;
        if (i < b)
        {
            ans += "B";
        }
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