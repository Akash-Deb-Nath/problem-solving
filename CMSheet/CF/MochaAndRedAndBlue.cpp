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
    string s;
    cin >> s;
    loop(i, 1, n)
    {
        if (s[i] == '?' && s[i - 1] != '?')
        {
            if (s[i - 1] == 'B')
            {
                s[i] = 'R';
            }
            else
            {
                s[i] = 'B';
            }
        }
    }
    if (s[n - 1] == '?')
    {
        s[n - 1] = 'R';
    }
    rloop(i, n - 2, 0)
    {
        if (s[i] == '?')
        {
            if (s[i + 1] == 'B')
            {
                s[i] = 'R';
            }
            else
            {
                s[i] = 'B';
            }
        }
    }
    dekhao(s);
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