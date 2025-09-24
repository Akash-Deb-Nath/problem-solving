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
    string ans;
    for (ll i = 0; i < n; i++)
    {
        if (ans.size() % 2 == 0 || ans.back() != s[i])
        {
            ans.pb(s[i]);
        }
    }
    if (ans.size() % 2 == 1)
    {
        ans.pop_back();
    }
    cout << n - ans.size() << "\n";
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}