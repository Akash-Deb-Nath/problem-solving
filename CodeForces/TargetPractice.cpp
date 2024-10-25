#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[10][10];
        int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, ans;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (s[i][j] == 'X')
                {
                    if (i == 0 || j == 0 || i == 9 || j == 9)
                    {
                        x1++;
                    }
                    else if (i == 1 || j == 1 || i == 8 || j == 8)
                    {
                        x2++;
                    }
                    else if (i == 2 || j == 2 || i == 7 || j == 7)
                    {
                        x3++;
                    }
                    else if (i == 3 || j == 3 || i == 6 || j == 6)
                    {
                        x4++;
                    }
                    else if (i == 4 || j == 4 || i == 5 || j == 5)
                    {
                        x5++;
                    }
                }
            }
        }
        ans = 1 * x1 + 2 * x2 + 3 * x3 + 4 * x4 + 5 * x5;
        cout << ans << endl;
    }

    return 0;
}