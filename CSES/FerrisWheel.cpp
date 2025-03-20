#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1e9 + 7

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> p(n);
    for (auto &i : p)
    {
        cin >> i;
    }
    sort(p.begin(), p.end());
    ll ans = n, i = 0, j = n - 1;
    while (i < j)
    {
        if (p[i] + p[j] <= x)
        {
            ans--;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}