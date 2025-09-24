#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(name, r, c, val) vector<vll> name(r, vll(c, val))
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll>
#define msll multiset<ll>
#define maxPqll priority_queue<ll>
#define minPqll priority_queue<ll, vll, greater<ll>>
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
    int n;
    cin >> n;
    ll x, y;
    cin >> x >> y;
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        dekhao(0);
        return;
    }
    vll mis;
    loop(i, 0, n)
    {
        if (a[i] != b[i])
        {
            mis.pb(i);
        }
    }
    if (mis.size() & 1)
    {
        dekhao(-1);
        return;
    }
    ll ans = 0;
    if (mis.size() == 2 && mis[0] + 1 == mis[1])
    {
        ans = min(2LL * y, x);
    }
    else
    {
        ans = y * ((ll)mis.size() / 2LL);
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