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
    ll q, x;
    cin >> q >> x;
    vector<ll> cnt(x, 0);
    ll mex = 0;
    for (ll i = 0; i < q; ++i)
    {
        ll y;
        cin >> y;
        y %= x;
        cnt[y]++;
        if (mex == y)
        {
            mex++;
        }
        while (cnt[mex % x] > mex / x)
        {
            mex++;
        }
        cout << mex << "\n";
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