#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define TwoDVll(r, c, val) <vector<ll>> grid(r, vector<ll>(c, val))
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
#define dekhao(x) cout << x << "\n";
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll mx = *max_element(all(a));
    ll cnt = count(all(a), mx);
    if (cnt == n)
    {
        dekhao(-1);
        return;
    }
    vll b, c;
    loop(i, 0, n)
    {
        if (a[i] == mx)
        {
            c.pb(mx);
        }
        else
        {
            b.pb(a[i]);
        }
    }
    cout << b.size() << " " << c.size() << "\n";
    for (auto &i : b)
    {
        cout << i << " ";
    }
    cout << "\n";
    for (auto &i : c)
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