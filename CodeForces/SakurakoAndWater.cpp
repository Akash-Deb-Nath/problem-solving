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
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        map<int, int> magic;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int diagonal = i - j;
                if (a[i][j] < 0)
                {
                    int magicNeeded = -a[i][j];
                    magic[diagonal] = max(magic[diagonal], magicNeeded);
                }
            }
        }
        for (const auto &entry : magic)
        {
            ans = ans + entry.second;
        }

        cout << ans << endl;
    }

    return 0;
}