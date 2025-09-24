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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll one = count(all(s), '1');
    if (one <= k)
    {
        dekhao("Alice");
        return;
    }
    if (n >= 2 * k)
    {
        dekhao("Bob");
        return;
    }
    vector<ll> pre(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + (s[i - 1] == '1');
    }
    loop(i, 0, i + k <= n)
    {
        ll inCnt = pre[i + k] - pre[i];
        ll outCnt = one - inCnt;
        if (outCnt <= k)
        {
            dekhao("Alice");
            return;
        }
    }
    dekhao("Bob");
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