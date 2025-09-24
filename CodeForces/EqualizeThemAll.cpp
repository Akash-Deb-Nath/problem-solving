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
#define minPqll (lll) priority_queue<ll, vll, greater<ll>>
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
    vll a(n);
    mll mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    ll mxElement = 0, mx = LONG_LONG_MIN;
    for (auto &i : mp)
    {
        if (i.S > mx)
        {
            mxElement = i.F;
            mx = i.S;
        }
    }
    vector<tuple<ll, ll, ll>> ans;
    ll i = 0;
    while (i < n && a[i] != mxElement)
    {
        if (a[i] < mxElement)
        {
            ans.pb({1, i + 1, i + 2});
        }
        else if (a[i] > mxElement)
        {
            ans.pb({2, i + 1, i + 2});
        }
        i++;
    }
    reverse(all(ans));
    while (i < n)
    {
        if (a[i] < mxElement)
        {
            ans.pb({1, i + 1, i});
        }
        else if (a[i] > mxElement)
        {
            ans.pb({2, i + 1, i});
        }
        i++;
    }
    dekhao(ans.size());
    for (auto &[x, y, z] : ans)
    {
        cout << x << " " << y << " " << z << "\n";
    }
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