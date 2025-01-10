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
        vector<ll> p(n);
        for (ll &i : p)
        {
            cin >> i;
        }
        rotate(p.begin(), p.begin() + 1, p.end());
        for (ll i : p)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}