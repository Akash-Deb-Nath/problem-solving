#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool check(vector<ll> a)
{
    ll n = a.size();
    for (ll i = 1; i < n; i++)
    {
        if ((abs(a[i] - a[i - 1]) != 5) && (abs(a[i] - a[i - 1]) != 7))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
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
        if (check(a))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}