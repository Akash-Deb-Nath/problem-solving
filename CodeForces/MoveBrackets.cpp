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
    string s;
    cin >> n >> s;
    ll ans = 0;
    ll bal = 0;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == '(')
            ++bal;
        else
        {
            --bal;
            if (bal < 0)
            {
                bal = 0;
                ++ans;
            }
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