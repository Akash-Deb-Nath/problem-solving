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
        ll a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int x = (int(a1 > b1) - int(a1 < b1) + int(a2 > b2) - int(a2 < b2)) > 0;
        int y = (int(a1 > b2) - int(a1 < b2) + int(a2 > b1) - int(a2 < b1)) > 0;
        ll ans = (x + y) * 2;
        cout << ans << endl;
    }

    return 0;
}