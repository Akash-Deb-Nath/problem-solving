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
    string s;
    cin >> s;
    map<ll, ll> mp;
    for (auto i : s)
    {
        ll temp = i - '0';
        mp[temp]++;
    }
    string ans;
    for (ll i = 9; i >= 0; i--)
    {
        for (ll j = i; j <= 9; j++)
        {
            if (mp[j])
            {
                ans += to_string(j);
                mp[j]--;
                break;
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