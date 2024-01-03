#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x, y, r;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[0] <= a[1] || a[1] <= a[2] || a[2] <= a[3])
    {
        if (a[0] == a[1] || a[0] == (a[1] - 1))
        {
            x = a[0];
        }
        if (a[2] == a[3] || a[2] == (a[3] - 1))
        {
            y = a[2];
        }
    }
    if (x == a[0] && y == a[2])
    {
        r = x * y;
        cout << r << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}