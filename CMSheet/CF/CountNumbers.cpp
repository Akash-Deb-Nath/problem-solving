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
    ll n, q;
    cin >> n >> q;
    map<ll, ll> mp;
    for (ll i = 0; i < q; i++)
    {
        ll z, x;
        cin >> z >> x;
        if (z == 1)
        {
            mp[x]++;
        }
        else
        {
            cout << mp[x] << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}