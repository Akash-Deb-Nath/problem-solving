#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int x = min(min(x1 - 1, n - x1), min(y1 - 1, n - y1));
        int y = min(min(x2 - 1, n - x2), min(y2 - 1, n - y2));
        int r = abs(x - y);
        cout << r << endl;
    }

    return 0;
}