#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
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

vector<ll> divisorsSum(1e12, 0);
void calculateDivisors(vector<ll> &divisorsSum, ll m)
{
    for (int i = 1; i < 1e12; i++)
    {
        for (int j = i; j < 1e12; j += i)
        {
            divisorsSum[i] = (divisorsSum[i] % m + i % m) % m;
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> pre(n + 2);
    for (ll i = 2; i <= n + 1; i++)
    {
        pre[i] = (pre[i - 1] % mod + divisorsSum[i - 1] % mod);
    }
    ll ans = pre[n + 1] % mod;
    dekhao(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    calculateDivisors(divisorsSum, mod);
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}