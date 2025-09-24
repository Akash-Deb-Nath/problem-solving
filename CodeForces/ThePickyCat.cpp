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
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = -a[i];
        }
    }
    ll x = a.front();
    asort(a);
    auto it = upper_bound(a.begin(), a.end(), x) - a.begin();
    ll m = (n + 1) / 2;
    m--;
    ll temp = n - it;
    if (temp >= m)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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