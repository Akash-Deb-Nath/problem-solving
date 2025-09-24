#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())

ll mid(vector<ll> &temp)
{
    sort(temp.begin(), temp.end());
    ll ans = temp[1];
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> temp;
    temp.pb(a[0]);
    temp.pb(a[n - 1]);
    n = n - 2;
    n = (n + 1) / 2;
    for (ll i = 1; i <= n; i++)
    {
        temp.pb(a[i]);
        ll m = mid(temp);
        temp.pop_back();
        cout << "Mid = " << m << "\n";
        if (m <= k)
        {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
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