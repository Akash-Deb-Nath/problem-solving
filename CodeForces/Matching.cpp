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
        int r = 1;
        int temp = 0;
        if (s[0] == '0')
        {
            temp = 1;
        }
        if (s[0] == '?')
        {
            r *= 9;
        }
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                r *= 10;
            }
        }
        int ans = (temp == 1) ? 0 : r;
        cout << ans << "\n";
    }

    return 0;
}