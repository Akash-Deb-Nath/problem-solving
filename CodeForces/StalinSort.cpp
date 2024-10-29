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
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            int current = i;
            for (int j = i + 1; j < n; j++)
            {
                current = current + (a[i] < a[j]);
            }
            ans = min(ans, current);
        }
        cout << ans << endl;
    }

    return 0;
}
