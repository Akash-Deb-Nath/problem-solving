#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    map<string, ll> mp;
    string s;
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    return 0;
}