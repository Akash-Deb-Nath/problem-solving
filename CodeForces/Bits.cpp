#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        for (ll i = 0; i < 63; i++)
        {
            if (((1LL << i) | l) > r)
            {
                break;
            }
            l = (1LL << i) | l;
        }
        cout << l << endl;
    }

    return 0;
}