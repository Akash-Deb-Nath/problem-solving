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
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    for (ll i = -m; i <= m; i++)
    {
        if (s.count(i) == 0)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}