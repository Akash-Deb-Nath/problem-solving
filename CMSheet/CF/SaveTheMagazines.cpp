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
    string s;
    cin >> s;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (ll i = 0, j = -1; i < n; i++)
    {
        if (s[i] == '0')
        {
            j = i;
        }
        else if (j >= 0 && a[i] < a[j])
        {
            swap(s[i], s[j]);
            j = i;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans += a[i];
        }
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