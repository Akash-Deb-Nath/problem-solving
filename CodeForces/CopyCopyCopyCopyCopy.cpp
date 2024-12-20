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
        set<ll> s;
        for (auto &i : a)
        {
            cin >> i;
            s.insert(i);
        }
        ll ans = s.size();
        cout << ans << endl;
    }

    return 0;
}