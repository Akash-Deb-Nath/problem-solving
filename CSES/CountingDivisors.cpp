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

vector<ll> divisorsCount(1000005, 0);
void calculateDivisors(vector<ll> &divisorsCount)
{
    for (int i = 1; i < 1000005; i++)
    {
        for (int j = i; j < 1000005; j += i)
        {
            divisorsCount[j]++;
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ans = divisorsCount[n];
    dekhao(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    calculateDivisors(divisorsCount);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}