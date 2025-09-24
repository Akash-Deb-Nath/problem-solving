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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll i = 0, j = n - 1;
    ll l = 0, r = 0;
    while (i < n && j >= 0)
    {
        if (a[i] == 1 && l == 0)
        {
            l = i + 1;
        }
        if (a[j] == 1 && r == 0)
        {
            r = j + 1;
        }
        i++;
        j--;
    }
    ll temp = r - l + 1;
    if (x >= temp)
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