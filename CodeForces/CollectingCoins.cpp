#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a[3], n;
    cin >> t;
    while (t--)
    {
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a + 3);
        if (n < (2 * a[2] - a[1] - a[0]))
        {
            cout << "NO" << endl;
        }
        else if ((n - (2 * a[2] - a[1] - a[0])) % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}