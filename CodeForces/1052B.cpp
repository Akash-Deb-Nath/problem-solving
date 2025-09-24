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
    ll n, m;
    cin >> n >> m;
    vector<vll> s(n);
    vll cnt(m + 1, 0);
    vector<vll> temp(m + 1);
    loop(i, 0, n)
    {
        ll l;
        cin >> l;
        s[i].resize(l);
        loop(j, 0, l)
        {
            cin >> s[i][j];
            cnt[s[i][j]]++;
            temp[s[i][j]].pb(i);
        }
    }
    loop(i, 1, m + 1)
    {
        if (cnt[i] == 0)
        {
            no;
            return;
        }
    }
    vector<bool> must(n, false);
    loop(i, 1, m + 1)
    {
        if (cnt[i] == 1)
        {
            must[temp[i][0]] = true;
        }
    }
    ll x = 0;
    loop(i, 0, n)
    {
        if (!must[i])
        {
            x++;
        }
    }
    if (x >= 2)
    {
        yes;
    }
    else
    {
        no;
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