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
    vector<ll>d(n);
    for (auto &i :d)
    {
        cin >> i;
    }
    vector<int> a(n);
    a[0] = d[0];
    for (int i = 1; i < n; i++)
    {
        if (d[i] > 0 && a[i - 1] >= d[i])
        {
            cout << -1 << "\n";
            return;
        }
        a[i] = a[i - 1] + d[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " \n"[i == n - 1];
    }
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