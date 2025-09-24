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

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        dekhao(-1);
        return;
    }
    ll d = m / n;
    ll count2 = 0;
    ll count3 = 0;
    while (d % 2 == 0)
    {
        d /= 2;
        count2++;
    }
    while (d % 3 == 0)
    {
        d /= 3;
        count3++;
    }
    ll ans = count2 + count3;
    if (d == 1)
    {
        dekhao(ans);
    }
    else
    {
        dekhao(-1);
    }
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