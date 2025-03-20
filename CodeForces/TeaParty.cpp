#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> cups(n);
    vector<ll> minTea(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> cups[i].first;
        cups[i].second = i;
        minTea[i] = (cups[i].first + 1) / 2;
        sum += minTea[i];
    }
    if (sum > w)
    {
        cout << -1 << "\n";
        return;
    }
    sort(cups.rbegin(), cups.rend());
    w = w - sum;
    for (ll i = 0; i < n; i++)
    {
        ll index = cups[i].second;
        ll cupsSize = cups[i].first;
        ll extra = min(w, cupsSize - minTea[index]);
        minTea[index] += extra;
        w -= extra;
    }
    for (auto i : minTea)
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

    solve();

    return 0;
}