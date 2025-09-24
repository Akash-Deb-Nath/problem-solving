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
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    ll m = t.size();
    ll i = n - 1;
    ll j = m - 1;
    ll cnt = 0;
    while (i >= 0 && j >= 0)
    {
        if (s[i] == t[j])
        {
            cnt++;
            i--;
            j--;
        }
        if (s[i] != t[j])
        {
            break;
        }
    }
    ll ans = n + m - (2 * cnt);
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}