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
    ll n;
    cin >> n;
    vll b(n);
    for (auto &i : b)
    {
        cin >> i;
    }
    map<ll, vll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[b[i]].pb(i);
    }
    vll a(n);
    ll cnt = 1;
    for (auto &i : mp)
    {
        if (i.S.size() % i.F != 0)
        {
            dekhao(-1);
            return;
        }
        for (int j = 0; j < i.S.size(); j += i.F)
        {
            for (int k = 0; k < i.F; k++)
            {
                a[i.S[j + k]] = cnt;
            }
            cnt++;
        }
    }
    for (auto &i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
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