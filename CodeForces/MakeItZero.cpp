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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll zero = count(all(a), 0);
    if (zero == n)
    {
        cout << 0 << "\n";
        return;
    }
    ll x = 0;
    loop(i, 0, n)
    {
        x ^= a[i];
    }
    if (x == 0)
    {
        cout << 1 << "\n";
        cout << 1 << " " << n << "\n";
    }
    else
    {
        if (n & 1)
        {
            cout << 4 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << 2 << "\n";
            cout << 2 << " " << 3 << "\n";
            cout << 1 << " " << n << "\n";
        }
        else
        {
            cout << 2 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
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