#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0, y = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            int w, h;
            cin >> w >> h;
            x = max(x, w);
            y = max(y, h);
        }
        ans = 2 * (x + y);
        cout << ans << endl;
    }

    return 0;
}