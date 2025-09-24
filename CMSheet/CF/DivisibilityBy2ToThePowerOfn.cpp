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
    ll sum = 0;
    for (auto &i : a)
    {
        cin >> i;
        ll temp = i;
        while (temp % 2 == 0)
        {
            sum++;
            temp /= 2;
        }
    }
    ll ans = 0;
    vector<ll> x;
    for (ll i = n; i >= 1; i--)
    {
        ll temp = i;
        ll cur = 0;
        while (temp % 2 == 0)
        {
            cur++;
            temp /= 2;
        }
        x.pb(cur);
    }
    dsort(x);
    for (auto i : x)
    {
        if (sum < n)
        {
            ans++;
            sum += i;
        }
    }
    if (sum < n)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans << "\n";
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