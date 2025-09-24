#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll a, x, y;
    cin >> a >> x >> y;
    bool found = 0;
    for (ll i = 1; i <= 100; ++i)
    {
        if (i == a)
        {
            continue;
        }
        ll BobToX = abs(i - x);
        ll BobToY = abs(i - y);
        ll AliceToX = abs(a - x);
        ll AliceToY = abs(a - y);
        if (BobToX < AliceToX && BobToY < AliceToY)
        {
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO") << "\n";
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