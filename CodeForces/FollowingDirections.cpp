#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string str;
        cin >> str;
        int x = 0, y = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'U')
            {
                y += 1;
            }
            else if (str[i] == 'R')
            {
                x += 1;
            }
            else if (str[i] == 'D')
            {
                y -= 1;
            }
            else
            {
                x -= 1;
            }
            if (x == 1 && y == 1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}