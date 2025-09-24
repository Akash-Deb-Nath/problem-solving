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
#define debug(x) cout << #x << " = " << x << "\n";

void solve()
{
    ll n, k;
    cin >> n >> k;
    multiset<ll> factors;
    ll temp = n;
    loop(i, 2, n + 1)
    {
        while (temp % i == 0)
        {
            factors.insert(i);
            temp /= i;
        }
    }
    if (factors.size() < k)
    {
        cout << -1 << "\n";
        return;
    }
    while (factors.size() > k)
    {
        auto it1 = factors.begin();
        ll mn = *it1;
        factors.erase(it1);
        auto it2 = factors.end();
        it2--;
        ll mx = *it2;
        factors.erase(it2);
        ll x = mn * mx;
        factors.insert(x);
    }
    for (auto &i : factors)
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
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}