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

const int INF = 100;

ll calc(string &s, string &t)
{
    ll n = s.size() - 1;
    ll ans = 0;
    while (n >= 0 && s[n] != t[1])
    {
        n--;
        ans++;
    }
    if (n < 0)
    {
        return INF;
    }
    n--;
    while (n >= 0 && s[n] != t[0])
    {
        n--;
        ans++;
    }
    return n < 0 ? INF : ans;
}
void solve()
{
    string s;
    cin >> s;
    ll ans = INF;
    string subseqs[] = {"00", "25", "50", "75"};
    for (auto e : subseqs)
    {
        ans = min(ans, calc(s, e));
    }

    cout << ans << '\n';
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