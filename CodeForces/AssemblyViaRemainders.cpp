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
        vector<ll> x(n - 1);
        for (auto &i : x)
        {
            cin >> i;
        }
        vector<ll> a;
        ll temp = 501;
        a.push_back(temp);
        for (ll i = 0; i < n - 1; i++)
        {
            a.push_back(temp + x[i]);
            temp = temp + x[i];
        }

        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}