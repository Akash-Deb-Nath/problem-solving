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
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> ans;
    ll cur = 0;
    for (ll i = 0; i <= min(1ll * 31, n - 1); i++)
    {
        ll mxOr = cur;
        ll mxIndex = -1;
        for (ll j = 0; j < n; j++)
        {
            if (a[j] == -1)
            {
                continue;
            }
            if ((cur | a[j]) >= mxOr)
            {
                mxOr = cur | a[j];
                mxIndex = j;
            }
        }
        cur |= a[mxIndex];
        ans.pb(a[mxIndex]);
        a[mxIndex] = -1;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            ans.pb(a[i]);
        }
    }
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