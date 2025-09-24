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

ll Cal(string &s, ll n)
{
    ll ans = 0;
    loop(i, 0, n - 1)
    {
        ans += stoll(s.substr(i, 2));
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll fPos = -1;
    loop(i, 0, n)
    {
        if (s[i] == '1')
        {
            fPos = i;
            break;
        }
    }
    if (fPos == -1)
    {
        dekhao(0);
        return;
    }
    ll lPos = -1;
    rloop(i, n - 1, 0)
    {
        if (s[i] == '1')
        {
            lPos = i;
            break;
        }
    }
    if (fPos == lPos)
    {
        if (k >= (n - lPos - 1))
        {
            swap(s[n - 1], s[lPos]);
        }
        else if (k >= fPos)
        {
            swap(s[0], s[fPos]);
        }
        ll ans = Cal(s, n);
        dekhao(ans);
        return;
    }
    ll temp = n - lPos - 1;
    ll ans = 0;
    if (k >= temp)
    {
        k -= temp;
        swap(s[n - 1], s[lPos]);
        if (k >= fPos)
        {
            swap(s[0], s[fPos]);
        }
        ans = Cal(s, n);
    }
    else
    {
        if (k >= fPos)
        {
            swap(s[0], s[fPos]);
        }
        ans = Cal(s, n);
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