#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << '1';
        for (ll i = 1; i < n; i++)
        {
            cout << '0';
        }
        cout << endl;
    }

    return 0;
}