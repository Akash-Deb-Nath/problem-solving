#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[4], y[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];
        }
        int a = max(abs(x[0] - x[1]), abs(x[2] - x[3]));
        int b = max(abs(y[0] - y[1]), abs(y[2] - y[3]));
        int r = max(a, b);
        int ans = r * r;
        cout << ans << endl;
    }

    return 0;
}