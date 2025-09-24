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
    vector<ll> p(n);
    for (auto &i : p)
    {
        cin >> i;
    }
    ll l = 0, r = n - 1;
    ll x = 1;
    while (l < r)
    {
        if (x == 1)
        {
            if (p[r] >= p[l])
            {
                cout << "RL";
            }
            else
            {
                cout << "LR";
            }
        }
        else
        {
            if (p[r] >= p[l])
            {
                cout << "LR";
            }
            else
            {
                cout << "RL";
            }
        }
        l++;
        r--;
        x ^= 1;
    }
    if (n & 1)
    {
        cout << "L";
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