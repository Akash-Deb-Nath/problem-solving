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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pre[i + 1] = pre[i] + a[i];
    }
    for (int i = 1; i < n; i++)
    {
        a[i] = max(a[i], a[i - 1]);
    }
    for (ll i = 0; i < q; i++)
    {
        ll k;
        cin >> k;
        ll x = upper_bound(a.begin(), a.end(), k) - a.begin();
        cout << pre[x] << " \n"[i == q - 1];
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