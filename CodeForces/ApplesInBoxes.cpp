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
    vector<ll> a(n);
    ll sum = 0;
    ll mx = LONG_LONG_MIN, mn = LONG_LONG_MAX;
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
        mx = max(mx, i);
        mn = min(mn, i);
    }
    ll mxCount = 0;
    for (auto i : a)
    {
        if (i == mx)
        {
            mxCount++;
        }
    }
    mx--;
    if (mx - mn > k || (mx - mn == k && mxCount > 1))
    {
        cout << "Jerry" << "\n";
        return;
    }
    if (sum % 2 == 0)
    {
        cout << "Jerry" << "\n";
    }
    else
    {
        cout << "Tom" << "\n";
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