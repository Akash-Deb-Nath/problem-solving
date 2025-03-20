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
    ll k;
    cin >> k;
    ll x = 0, y = 0, totalPairs = 0, CurrentLine = 0;
    vector<pair<ll, ll>> ans;
    while (totalPairs < k)
    {
        if ((totalPairs + CurrentLine) > k)
        {
            y++;
            CurrentLine = 0;
        }
        ans.push_back({x, y});
        totalPairs += CurrentLine;
        CurrentLine++;
        x++;
    }
    cout << ans.size() << "\n";
    for (auto i : ans)
    {
        cout << i.F << " " << i.S << "\n";
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