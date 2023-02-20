#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        p = sqrt(x);
        for (int i = 2; i <= sqrt(p); i++)
        {
            if (p % i != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        //     if (r == 3)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }

        return 0;
    }
}