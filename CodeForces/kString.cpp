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
    ll k;
    cin >> k;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto &ch : s)
    {
        mp[ch]++;
    }
    string ans;
    for (auto i : mp)
    {
        if (i.S % k != 0)
        {
            dekhao(-1);
            return;
        }
        else
        {
            ll x = i.S / k;
            while (x--)
            {
                ans += i.F;
                i.S--;
            }
        }
    }
    while (k--)
    {
        cout << ans;
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