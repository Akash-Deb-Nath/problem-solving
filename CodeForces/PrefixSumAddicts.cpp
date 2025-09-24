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
    ll n, k;
    cin >> n >> k;
    vector<ll> s(k);
    for (auto &i : s)
    {
        cin >> i;
    }
    if (k == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    vector<ll> d(k - 1);
    for (ll i = 0; i < k - 1; i++)
    {
        d[i] = s[i + 1] - s[i];
    }
    if (!is_sorted(d.begin(), d.end()))
    {
        cout << "NO" << '\n';
        return;
    }
    if ((n - k + 1) * d[0] >= s[0])
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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