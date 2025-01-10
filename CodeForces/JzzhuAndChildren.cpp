#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    ll mx = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll temp = (a[i] + m - 1) / m;
        if (temp >= mx)
        {
            mx = temp;
            ans = i;
        }
    }
    cout << ans + 1 << "\n";
    return 0;
}