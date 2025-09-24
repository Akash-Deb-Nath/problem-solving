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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    bool beautiful = false;
    for (int i = 0; i + 1 < n; i++)
    {
        if (llabs(a[i] - a[i + 1]) <= 1)
        {
            beautiful = true;
            break;
        }
    }
    if (beautiful)
    {
        dekhao(0);
        return;
    }
    if (n == 2)
    {
        dekhao(-1);
        return;
    }
    bool possible = false;
    for (ll i = 0; i + 1 < n && !possible; i++)
    {
        ll mn = min(a[i], a[i + 1]);
        ll mx = max(a[i], a[i + 1]);
        if (i - 1 >= 0)
        {
            ll l = max(mn, a[i - 1] - 1);
            ll r = min(mx, a[i - 1] + 1);
            if (l <= r)
            {
                possible = true;
                break;
            }
        }
        if (i + 2 < n)
        {
            ll l = max(mn, a[i + 2] - 1);
            ll r = min(mx, a[i + 2] + 1);
            if (l <= r)
            {
                possible = true;
                break;
            }
        }
    }
    if (possible)
    {
        dekhao(1);
    }
    else
    {
        dekhao(-1);
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