#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int x[a];
        for (int i = 0; i < a; i++)
        {
            cin >> x[i];
        }
        bool flag = 0;
        for (int i = 0; i < a; i++)
        {
            if (x[i] <= i + 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
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