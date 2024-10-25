#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, z, k;
        cin >> x >> y >> z >> k;
        long long int ans = 0, res, newZ;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                if (i * j > k)
                {
                    continue;
                }
                if (k % (i * j))
                {
                    continue;
                }
                newZ = k / (i * j);
                if (newZ > z)
                {
                    continue;
                }
                res = (x + 1 - i) * (y + 1 - j) * (z + 1 - newZ);
                ans = max(ans, res);
            }
        }
        cout << ans << endl;
    }

    return 0;
}