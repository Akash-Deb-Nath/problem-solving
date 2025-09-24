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
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    ll l = 0, r = 0;
    for (ll i = 0; i < y.size(); i++)
    {
        if (y[i] == '1')
        {
            l = i + 1;
            break;
        }
    }
    for (ll i = l - 1; i < x.size(); i++)
    {
        if (x[i] == '1')
        {
            r = i + 1;
            break;
        }
    }
    ll ans = r - l;
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