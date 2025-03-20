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
    ll n, m;
    cin >> n >> m;
    vector<ll> infected(m);
    for (auto &i : infected)
    {
        cin >> i;
    }
    sort(infected.begin(), infected.end());
    vector<ll> safe;
    ll t = 1;
    for (ll i = 0; i < m; i++)
    {
        safe.pb(infected[i] - t);
        t = infected[i] + 1;
    }
    safe[0] += (n - infected[m - 1]);
    sort(safe.rbegin(), safe.rend());
    ll day = 0, ans = 0;
    for (ll i = 0; i < safe.size(); i++)
    {
        if (safe[i] > day * 2)
        {
            if (safe[i] - (day * 2) <= 2)
            {
                ans++;
            }
            else
            {
                ans += (safe[i] - (day * 2) - 1);
            }
        }
        day += 2;
    }
    cout << n - ans << "\n";
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