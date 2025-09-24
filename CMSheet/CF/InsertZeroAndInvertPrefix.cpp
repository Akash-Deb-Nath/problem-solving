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
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (a.back() == 1)
    {
        no;
        return;
    }
    vector<ll> ans;
    ll index = n - 1;
    while (index >= 0)
    {
        ll zero = 0;
        ll one = 0;
        while (index >= 0 && a[index] == 0)
        {
            zero++;
            index--;
        }
        while (index >= 0 && a[index] == 1)
        {
            one++;
            index--;
        }
        loop(i, 0, zero - 1)
        {
            ans.pb(0);
        }
        loop(i, 0, one)
        {
            ans.pb(0);
        }
        ans.pb(one);
    }
    yes;
    for (auto &i : ans)
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
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}