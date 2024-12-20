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
        ll l, r;
        cin >> l >> r;
        ll mx = -1, ans = 0;
        for (ll i = l; i <= r; i++)
        {
            string s = to_string(i);
            ll temp = (*max_element(s.begin(), s.end())) - (*min_element(s.begin(), s.end()));
            if (temp > mx)
            {
                mx = temp;
                ans = i;
            }
            if (mx == 9)
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}