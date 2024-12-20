#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        vector<ll> a;
        vector<ll> b;
        if (n & 1)
        {
            for (ll i = 1; i <= n; i++)
            {
                if ((i - 1) % 4 < 2)
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
        }
        else
        {
            for (ll i = 1; i <= n; i++)
            {
                if (i % 4 < 2)
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
        }

        cout << a.size() << endl;
        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for (auto &i : b)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}