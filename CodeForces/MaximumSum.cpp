#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        int result, count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < k; i++)
        {
            if (a[0] + a[1] >= a[n - 1])
            {
                n = n - 1;
            }
            else
            {
                a[0] = a[i + 2];
                a[1] = a[i + 3];
            }
        }
        for (int i = 0; i < n; i++)
        {
            count = count + a[i];
        }
    }

    return 0;
}