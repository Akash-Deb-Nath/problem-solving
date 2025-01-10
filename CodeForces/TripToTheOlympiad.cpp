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
        ll i = 0, msb = 0;
        while (1 << i <= r)
        {
            msb = 1 << i;
            i++;
        }
        ll a = msb;
        ll b = msb - 1;
        ll c = l;
        ll tempXor = (a ^ b) + (b ^ c) + (a ^ c);
        ll s = l, e = r;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            ll xorSum = (a ^ b) + (b ^ mid) + (a ^ mid);
            if (xorSum > tempXor)
            {
                c = mid;
                tempXor = xorSum;
            }
            else if (xorSum < tempXor)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
}