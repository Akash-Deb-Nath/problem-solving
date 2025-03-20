#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll ans = 0;
    for (ll ans = 2;; ans *= 2)
    {
        set<ll> s;
        for (auto i : a)
        {
            s.insert(i % ans);
        }
        if (s.size() == 2)
        {
            cout << ans << "\n";
            return;
        }
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