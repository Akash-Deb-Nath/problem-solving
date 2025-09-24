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
    asort(a);
    ll ans = 0;
    for (ll k = 0; k <= n; k++)
    {
        if (2 * k - 2 >= n)
        {
            break;
        }
        bool flag = 1;
        ll temp = k;
        for (ll i = 2 * k - 2; i >= k - 1; i--)
        {
            if (a[i] <= temp)
            {
                temp--;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            ans = k;
        }
    }
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