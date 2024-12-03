#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
    }
    cout << mp.size() << endl;
    return 0;
}