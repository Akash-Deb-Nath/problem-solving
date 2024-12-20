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
        ll ans = 0, i = 1;
        while (n % i == 0)
        {
            ans++;
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}