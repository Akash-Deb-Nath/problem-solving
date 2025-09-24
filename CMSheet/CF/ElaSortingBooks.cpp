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
    map<char, ll> mp;
    for (auto &ch : s)
    {
        mp[ch]++;
    }
    string ans;
    for (ll i = 1; i <= k; i++)
    {
        char currentMex = 'a';
        for (ll j = 1; j <= min(26ll, n / k); j++)
        {
            if (mp[currentMex] <= 0)
            {
                ans.pb(currentMex);
                break;
            }
            else
            {
                mp[currentMex]--;
                currentMex++;
            }
        }
        if (ans.size() < i)
        {
            ans.pb(currentMex);
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