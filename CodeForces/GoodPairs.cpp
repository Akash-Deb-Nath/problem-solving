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
        for (auto &i : a)
        {
            cin >> i;
        }
        vector<ll> temp = a;
        sort(temp.begin(), temp.end());
        ll x = 0, y = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == temp.front())
            {
                x = i + 1;
            }
            if (a[i] == temp.back())
            {
                y = i + 1;
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}