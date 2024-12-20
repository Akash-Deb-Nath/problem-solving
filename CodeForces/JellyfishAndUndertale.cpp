#include "bits/stdc++.h"

using namespace std;

#define ll long long

const ll INF = 2e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> x(n);
        for (ll &i : x)
        {
            cin >> i;
            b += min(a - 1, i);
        }
        cout << b << endl;
    }
    return 0;
}
