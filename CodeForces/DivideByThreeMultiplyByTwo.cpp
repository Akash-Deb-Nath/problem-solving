#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

ll CountThree(ll n)
{
    ll count = 0;
    while (n % 3 == 0)
    {
        n /= 3;
        count++;
    }
    return count;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll, ll>> p;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        p.push_back({-CountThree(a[i]), a[i]});
    }
    sort(p.begin(), p.end());
    for (auto &i : p)
    {
        cout << i.second << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}