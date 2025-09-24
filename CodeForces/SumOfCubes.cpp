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

const ll N = 1'000'000'000'000L;

unordered_set<ll> aCubes;

void precalc()
{
    for (ll i = 1; i * i * i <= N; i++)
    {
        aCubes.insert(i * i * i);
    }
}

void solve()
{
    ll x;
    cin >> x;
    for (ll i = 1; i * i * i <= x; i++)
    {
        ll bCube = i * i * i;
        ll req = x - bCube;
        if (aCubes.count(req))
        {
            yes;
            return;
        }
    }
    no;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precalc();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}