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
    string s;
    cin >> s;
    ll n;
    cin >> n;
    string t = s;
    for (auto &ch : t)
    {
        if (ch == '?')
        {
            ch = '0';
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            t[i] = '1';
            ll temp = bitset<64>(t).to_ullong();
            if (temp > n)
            {
                t[i] = '0';
            }
        }
    }
    ll ans = bitset<64>(t).to_ullong();
    if (ans > n)
    {
        dekhao(-1);
        return;
    }
    dekhao(ans);
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