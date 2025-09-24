#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

bool powerOfTwo(ll x)
{
    if ((x & (x - 1)) == 0)
    {
        return 1;
    }
    return 0;
}

void solve()
{
    ll x;
    cin >> x;
    if (powerOfTwo(x) || powerOfTwo(x + 1))
    {
        cout << -1 << "\n";
        return;
    }
    ll y = 1;
    while ((y << 1) < x)
    {
        y <<= 1;
    }
    cout << y - 1 << "\n";
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