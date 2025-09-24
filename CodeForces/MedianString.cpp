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
    ll k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    vll a(k), b(k), c(k);
    for (ll i = 0; i < k; i++)
    {
        a[i] = s[i] - 'a';
        b[i] = t[i] - 'a';
        c[i] = a[i] + b[i];
    }
    for (ll i = k - 1; i > 0; i--)
    {
        if (c[i] >= 26)
        {
            c[i] -= 26;
            c[i - 1]++;
        }
    }
    for (ll i = 0; i < k; i++)
    {
        c[i + 1] += (c[i] % 2) * 26;
        c[i] /= 2;
        cout << char(c[i] + 'a');
    }
    cout << '\n';
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