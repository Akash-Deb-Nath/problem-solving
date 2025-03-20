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
    vector<ll> b(2 * n);
    for (auto &i : b)
    {
        cin >> i;
    }
    dsort(b);
    vector<ll> ans;
    ans.pb(b.back());
    b.pop_back();
    for (auto i : b)
    {
        ans.pb(i);
    }
    ll sum = 0;
    for (ll i = 0; i + 1 < b.size(); i += 2)
    {
        sum += (b[i] - b[i + 1]);
    }
    ll temp = b.back() + sum - ans[0];
    ans.pb(temp);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << "\n";
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