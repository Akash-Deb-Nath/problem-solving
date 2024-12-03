#include <bits/stdc++.h>

using namespace std;

#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a((2 * n));
        ll one = 0, zero = 0;
        for (auto &i : a)
        {
            cin >> i;
            if (i == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if (one % 2 == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
        cout << min(zero, one) << endl;
    }
}