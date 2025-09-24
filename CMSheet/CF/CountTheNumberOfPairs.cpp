#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(r, c, val) vector<vll> grid(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
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
#define dekhao(x) cout << x << "\n"
#define debug(x) cout << #x << " = " << x << "\n"
#define nl cout << "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vll a(26, 0), b(26, 0);
    for (auto &ch : s)
    {
        if (isupper(ch))
        {
            b[ch - 'A']++;
        }
        else
        {
            a[ch - 'a']++;
        }
    }
    ll ans = 0;
    for (char i = 0; i < 26; i++)
    {
        ll mn = min(a[i], b[i]);
        a[i] -= mn;
        b[i] -= mn;
        ans += mn;
        ll temp = (a[i] + b[i]) / 2;
        ll mn2 = min(k, temp);
        if (k > 0)
        {
            k -= mn2;
            ans += mn2;
        }
    }
    dekhao(ans);
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