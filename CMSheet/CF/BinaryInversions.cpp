#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

ll cal(vector<ll> &a)
{
    ll res = 0;
    ll ones = 0;
    ll n = a.size();
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ones++;
        }
        else
        {
            res += ones;
        }
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll ans = cal(a);
    vector<ll> b = a;
    ll index = n - 1;
    while (index >= 0)
    {
        if (a[index] == 1)
        {
            a[index] = 0;
            break;
        }
        index--;
    }
    ans = max(ans, cal(a));
    index = 0;
    while (index < n)
    {
        if (b[index] == 0)
        {
            b[index] = 1;
            break;
        }
        index++;
    }
    ans = max(ans, cal(b));
    cout << ans << "\n";
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