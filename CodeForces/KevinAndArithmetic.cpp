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
        vector<ll> a(n);
        ll even = 0, odd = 0;
        for (auto &i : a)
        {
            cin >> i;
            if (i & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (even == 0)
        {
            cout << odd - 1 << "\n";
        }
        else
        {
            cout << odd + 1 << "\n";
        }
    }

    return 0;
}