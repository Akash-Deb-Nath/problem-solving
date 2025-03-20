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
    ll last = -1;
    ll ans = n + 1;
    for (ll i = 0; i <= n; i++)
    {
        if (i == n || a[i] != a[0])
        {
            ans = min(ans, i - last - 1);
            last = i;
        }
    }
    if (ans == n)
    {
        ans = -1;
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