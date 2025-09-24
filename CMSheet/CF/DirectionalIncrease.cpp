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
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    vector<ll> pre;
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
        pre.pb(sum);
    }
    if (pre.back() != 0)
    {
        no;
        return;
    }
    bool ok = 1;
    loop(i, 0, n)
    {
        if (pre[i] < 0)
        {
            ok = 0;
        }
    }
    bool visitedZero = 0;
    loop(i, 0, n)
    {
        if (pre[i] == 0)
        {
            visitedZero = 1;
        }
        else if (visitedZero)
        {
            ok = 0;
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
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