#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

#define F first

#define S second

#define pb push_back

#define asort(x) sort(x.begin(), x.end())

#define dsort(x) sort(x.rbegin(), x.rend())

void solve()
{
    ll n;
    cin >> n;
    vector<ll> x(n);
    ll limit = 1e6;
    vector<ll> cnt(limit + 1);
    for (auto &i : x)
    {
        cin >> i;
        cnt[i]++;
    }
    for (ll i = limit; i >= 0; i--)
    {
        ll div = 0;
        for (ll j = i; j <= limit; j += i)
        {
            div += cnt[j];
        }
        if (div >= 2)
        {
            cout << i << "\n";
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}