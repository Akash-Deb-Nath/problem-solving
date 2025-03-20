#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0, mx = 0;
    for (auto &i : a)
    {
        cin >> i;
        mx = max(mx, i);
        sum += i;
    }
    ll ans = 0;
    if (sum % 2 == 0 && mx <= sum / 2)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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