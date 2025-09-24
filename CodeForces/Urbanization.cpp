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
    ll n, n1, n2;
    cin >> n >> n1 >> n2;
    vll a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (n1 > n2)
    {
        swap(n1, n2);
    }
    asort(a);
    ll sum1 = 0, sum2 = 0;
    rloop(i, n - 1, n - n1)
    {
        sum1 += a[i];
    }
    rloop(i, n - n1 - 1, n - (n1 + n2))
    {
        sum2 += a[i];
    }
    double avg1 = (double)sum1 / n1;
    double avg2 = (double)sum2 / n2;
    double ans = avg1 + avg2;
    cout << fixed << setprecision(12) << ans << "\n";
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