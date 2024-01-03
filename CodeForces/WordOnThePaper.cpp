#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch[8][8];
        string s;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> ch[i][j];
                if (ch[i][j] != '.')
                {
                    s = s + ch[i][j];
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}