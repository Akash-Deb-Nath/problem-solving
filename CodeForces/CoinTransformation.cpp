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
        while (n > 3)
        {
            n = n / 4;
            ans = ans * 2;
        }
        cout << ans << endl;
    }

    return 0;
}