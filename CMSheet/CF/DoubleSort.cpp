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
#define dekhao(x) cout << x << "\n"
#define debug(x) cout << #x << " = " << x << "\n"
#define nl cout << "\n"

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vll b(n);
    for (auto &i : b)
    {
        cin >> i;
    }
    vector<pll> ans;
    loop(i, 0, n)
    {
        loop(j, i + 1, n)
        {
            if (a[i] > a[j] || b[i] > b[j])
            {
                ans.pb({i + 1, j + 1});
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    if (!is_sorted(all(a)) || !is_sorted(all(b)))
    {
        dekhao(-1);
        return;
    }
    dekhao(ans.size());
    for (auto &[i, j] : ans)
    {
        cout << i << " " << j << "\n";
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