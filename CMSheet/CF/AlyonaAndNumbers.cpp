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
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mpN, mpM;
    loop(i, 1, n + 1)
    {
        ll x = i % 5;
        mpN[x]++;
    }
    loop(i, 1, m + 1)
    {
        ll x = i % 5;
        mpM[x]++;
    }
    ll ans = 0;
    ans += (mpN[0] * mpM[0]);
    loop(i, 1, 5)
    {
        ans += (mpN[i] * mpM[5 - i]);
    }
    cout << ans << endl;
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