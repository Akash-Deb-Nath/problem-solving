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
    ll n;
    cin >> n;
    vector<ll> a(n), prefixMin(n), suffixMax(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    prefixMin[0] = a[0];
    for (int i = 1; i < n; ++i)
    {
        prefixMin[i] = min(prefixMin[i - 1], a[i]);
    }
    suffixMax[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        suffixMax[i] = max(suffixMax[i + 1], a[i]);
    }
    string ans;
    for (int i = 0; i < n; ++i)
    {
        if (prefixMin[i] == a[i] || suffixMax[i] == a[i])
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    dekhao(ans);
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