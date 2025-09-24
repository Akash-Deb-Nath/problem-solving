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
    ll l, r, x;
    cin >> l >> r >> x;
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (abs(a - b) >= x)
    {
        cout << 1 << "\n";
    }
    else if (r - max(a, b) >= x || min(a, b) - l >= x)
    {
        cout << 2 << "\n";
    }
    else if ((r - b >= x & a - l >= x) || (r - a >= x && b - l >= x))
    {
        cout << 3 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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