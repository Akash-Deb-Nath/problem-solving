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
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<ll> countSetBits(31, 0);
    for (auto &num : a)
    {
        for (int i = 0; i < 31; i++)
        {
            if ((num >> i) & 1)
            {
                countSetBits[i]++;
            }
        }
    }
    rloop(i, 30, 0)
    {
        ll need = n - countSetBits[i];
        if (need <= k)
        {
            countSetBits[i] += need;
            k -= need;
        }
    }
    ll ans = 0;
    loop(i, 0, 31)
    {
        if (countSetBits[i] == n)
        {
            ans += (1 << i);
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