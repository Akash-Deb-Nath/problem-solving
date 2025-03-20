#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        iota(a.begin(), a.end(), 1ll);
        a[n / 2] = a[n - 1] = 1;
        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}