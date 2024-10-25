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
        int a[n];
        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 69 << " ";
            }
            cout << endl;
        }
        else
        {
            a[0] = 1;
            a[1] = 3;
            for (int i = 2; i < n; i++)
            {
                a[i] = 2;
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}