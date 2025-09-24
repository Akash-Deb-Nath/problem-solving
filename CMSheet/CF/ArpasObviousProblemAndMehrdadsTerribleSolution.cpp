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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    map<ll, ll> mp;
    ll ans = 0;
    for (auto &i : a)
    {
        cin >> i;
        ll temp = i ^ x;
        ans += mp[temp];
        mp[i]++;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}