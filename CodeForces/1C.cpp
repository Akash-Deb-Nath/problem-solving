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
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> lastSeen(n + 1, n + 1), nextPos(n + 1);
    for (ll i = n; i >= 1; --i)
    {
        nextPos[i] = lastSeen[a[i]];
        lastSeen[a[i]] = i;
    }
    ll segments = 0;
    ll start = 1;
    ll prev = 1;
    while (start <= n)
    {
        ll mx = 0;
        ll cut = -1;
        for (ll p = start; p <= n; p++)
        {
            mx = max(mx, nextPos[p]);
            if (p >= prev && mx <= n)
            {
                cut = p;
                break;
            }
        }
        if (cut == -1)
        {

            segments++;
            break;
        }
        segments++;
        prev = mx;
        start = cut + 1;
    }
    cout << segments << "\n";
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