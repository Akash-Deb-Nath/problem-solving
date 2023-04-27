#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, r = 0, p = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                r = r + a[i];
            }
            else
            {
                p = p + a[i];
            }
        }
        if (r > p)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        r = 0, p = 0;
    }

    return 0;
}