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
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (b > a)
    {
        if ((b - a) % 2 == 0)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    else
    {
        if ((a - b) % 2 == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
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