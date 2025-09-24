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
    string a, b;
    cin >> a >> b;
    ll n = a.size(), m = b.size();
    if (a == b)
    {
        dekhao(-1);
        return;
    }
    else if (n != m)
    {
        dekhao(max(n, m));
        return;
    }
    else
    {
        ll ans = 1, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        dekhao(ans);
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