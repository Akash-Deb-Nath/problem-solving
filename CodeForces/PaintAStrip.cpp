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
        ll ans = 1;
        ll temp = 1;
        while (temp < n)
        {
            ans++;
            temp = temp * 2 + 2;
        }
        cout << ans << endl;
    }

    return 0;
}