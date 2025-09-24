#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define asort(x) sort(x.begin(), x.end())
#define dsort(x) sort(x.rbegin(), x.rend())
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

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
    ll mn = a.front();
    ll mx = a.back();
    if ((mn % 2 == 0 && mx % 2 == 0) || (mn % 2 == 1 && mx % 2 == 1))
    {
        cout << 0 << endl;
    }
    else if (mn % 2 == 1 && mx % 2 == 0)
    {
        ll nextOdd, nextEven;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                nextEven = i + 1;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == 1)
            {
                nextOdd = i + 1;
                break;
            }
        }
        ll ans = min(n - nextOdd, nextEven - 1);
        cout << ans << endl;
    }
    else
    {
        ll nextOdd, nextEven;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                nextOdd = i + 1;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == 0)
            {
                nextEven = i + 1;
                break;
            }
        }
        ll ans = min(n - nextEven, nextOdd - 1);
        cout << ans << endl;
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