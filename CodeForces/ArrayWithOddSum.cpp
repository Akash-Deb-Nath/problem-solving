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
            if (i % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if ((even > 0 && odd > 0) || odd % 2 == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}