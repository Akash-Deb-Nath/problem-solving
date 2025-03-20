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
    ll x = 0;
    vector<ll> ans;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.pb(i);
            n /= i;
            x++;
        }
        if (x == 2)
        {
            if (ans[1] != n)
            {
                ans.pb(n);
            }
            break;
        }
    }
    if (x == 2 && ans.size() == 3)
    {
        cout << "YES" << "\n";
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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