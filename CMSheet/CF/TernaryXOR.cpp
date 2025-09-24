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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string a, b;
    bool flag = 0;
    loop(i, 0, n)
    {
        if (s[i] == '1' && flag == 0)
        {
            flag = 1;
            a.pb('1');
            b.pb('0');
        }
        else if ((s[i] == '0' || s[i] == '2') && flag == 0)
        {
            ll val = s[i] - '0';
            a.pb(val / 2 + '0');
            b.pb(val / 2 + '0');
        }
        else if (flag)
        {
            a.pb('0');
            b.pb(s[i]);
        }
    }
    dekhao(a);
    dekhao(b);
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