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
        ll cur = 0;
        for (auto &i : a)
        {
            cin >> i;
            cur = (cur / i + 1) * i;
        }
        cout << cur << "\n";
    }

    return 0;
}