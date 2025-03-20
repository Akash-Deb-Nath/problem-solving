#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    if (n <= 2)
    {
        sort(a.begin(), a.end());
        cout << a[0] << "\n";
        return;
    }
    ll ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        vector<ll> temp;
        temp = {a[i], a[i + 1], a[i + 2]};
        sort(temp.begin(), temp.end());
        ans = max(ans, temp[1]);
    }
    cout << ans << "\n";
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