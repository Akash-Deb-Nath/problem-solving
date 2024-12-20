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
        ll n, k;
        cin >> n >> k;
        ll l = n - k, r = n;
        ll cnt = (r + 1) / 2 - (l + 1) / 2;
        if (cnt & 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}