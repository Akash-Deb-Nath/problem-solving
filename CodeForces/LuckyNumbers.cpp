#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r = 0, ans = 0, maximum = INT_MIN;
        cin >> a >> b;
        while (a <= b)
        {
            c = a / 10;
            d = a % 10;
            r = c - d;
            if (abs(r) > maximum && a < 100)
            {
                ans = a;
            }
            maximum = r;
            a++;
        }
        cout << ans << endl;
    }

    return 0;
}