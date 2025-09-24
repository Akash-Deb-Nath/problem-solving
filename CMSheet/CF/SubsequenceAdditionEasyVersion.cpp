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
    vector<ll> c(n);
    for (auto &i : c)
    {
        cin >> i;
    }
    asort(c);
    vector<ll> pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + c[i - 1];
    }
    if (c.front() != 1)
    {
        cout << "NO" << "\n";
        return;
    }
    for (ll i = 1; i < n; i++)
    {
        if (c[i] > pre[i])
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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