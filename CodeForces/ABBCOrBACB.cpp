#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        int l = s.length();
        int cnt = 0, minSum = INT_MAX;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
            }
            else
            {
                ans += cnt;
                minSum = min(minSum, cnt);
                cnt = 0;
            }
        }
        if (cnt > 0)
        {
            ans += cnt;
            minSum = min(minSum, cnt);
        }
        if (s[0] == 'B' || s[l - 1] == 'B')
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans - minSum << endl;
        }
    }
    return 0;
}