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
    string s;
    cin >> s;
    vector<ll> a(n + 1);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a[i + 1] = 1;
        }
        else
        {
            a[i + 1] = 0;
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
        {
            if (a[j] == 0)
            {
                ans += i;
                a[j] = -1;
            }
            else if (a[j] == 1)
            {
                break;
            }
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