#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int n = r - l + 1;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            b[i] = l + i;

        long long sum = 0;
        for (int i = n; i >= 1; i--)
        {
            int bi = b[i];
            int index = 31 - __builtin_clz(bi);
            cout << " index = " << index << "\n";
            int x = 0;
            for (int bit = 0; bit <= index; bit++)
            { // r < 2*10^5, max 18 bits enough
                if ((b[i] & (1 << bit)) == 0)
                {
                    x += (1 << bit); // set all unset bits in a[i]
                }
            }
            a[i] = x;
            sum += (1ll << index) - 1;
        }

        cout << sum << "\n";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
