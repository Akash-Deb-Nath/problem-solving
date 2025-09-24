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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    asort(a);
    vector<ll> v;
    if (n % 2 == 1)
    {
        cout << "NO" << "\n";
        return;
    }
    for (ll i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        v.pb(a[i]);
        v.pb(a[j]);
    }
    v.pb(v[0]);
    v.pb(v[1]);
    ll ans = 0;
    for (ll i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            continue;
        }
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            continue;
        }
        else
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
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