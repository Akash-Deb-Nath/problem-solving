#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, q, l, r, k, p = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> q;
        int a[n], temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            temp[i] = a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> l >> r >> k;
            p = 0;
            for (int i = 0; i < n; i++)
            {
                a[i] = temp[i];
            }
            for (int i = l - 1; i <= r - 1; i++)
            {
                a[i] = k;
            }
            for (int i = 0; i < n; i++)
            {
                p = p + a[i];
            }
            if (p % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

            cout << endl;
        }
    }
    return 0;
}