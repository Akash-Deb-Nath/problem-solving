#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        bool flag = false;
        for (int i = 0; i < 6; i++)
        {
            if (x.find(s) != -1)
            {
                flag = true;
                cout << i << endl;
                break;
            }
            x += x;
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}