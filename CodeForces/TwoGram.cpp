#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<string, ll> mp;
    for (ll i = 0; i + 1 < n; i++)
    {
        string temp = s.substr(i, 2);
        mp[temp]++;
    }
    ll mx = 0;
    string ans;
    for (auto &i : mp)
    {
        if (i.second > mx)
        {
            mx = i.second;
            ans = i.first;
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}