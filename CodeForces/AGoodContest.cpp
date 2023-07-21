#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int flag = 0;
    while (t--)
    {
        int b, a;
        string s;
        cin >> s >> b >> a;
        if (b >= 2400)
        {
            if (a > b)
            {
                flag = 1;
            }
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

    return 0;
}