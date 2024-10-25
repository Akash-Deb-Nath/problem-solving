#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        x = (x + k - 1) / k;
        y = (y + k - 1) / k;
        cout << max(2 * x - 1, 2 * y) << endl;
    }

    return 0;
}