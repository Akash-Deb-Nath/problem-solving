#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    ll l, r;
    for (ll i = 0; i < n; i++)
    {
        cin >> l >> r;
        a.push_back({l, -1});
        a.push_back({r, 1});
    }
    sort(a.begin(), a.end());
    ll temp = 0;
    for (auto i : a)
    {
        if (i.second == -1)
        {
            temp++;
        }
        else
        {
            temp--;
        }
        if (temp > 2)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}