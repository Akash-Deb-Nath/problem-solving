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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll l = 0, r = 1e9;
    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        ll cnt = 0, f = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (a[i] > mid)
            {
                if (s[i] == 'B')
                {
                    if (!f)
                        cnt++, f = 1;
                }
                else
                {
                    f = 0;
                }
            }
        }
        if (cnt > k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l << "\n";
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