#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (ll i = 0; i < n; i++)
    {
        a[i] = abs(a[i]);
    }
    sort(a.begin(), a.end());
    cout << a[0] << endl;

    return 0;
}