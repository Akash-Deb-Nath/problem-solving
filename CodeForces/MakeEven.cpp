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
        if ((s.back() - '0') % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if ((s.front() - '0') % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            bool flag = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    flag = 1;
                }
            }
            if (flag)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}