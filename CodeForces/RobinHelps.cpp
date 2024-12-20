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
        vector<ll> a(n);
        ll sum = 0, ans = 0;
        for (auto &i : a)
        {
            cin >> i;
            if (i >= k)
            {
                sum = sum + i;
            }
            else if (i == 0 && sum > 0)
            {
                sum--;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}