#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n >= 2020)
        {
            if (n % 2 == 0)
            {
                if (n % 2020 == 0 || n % 2021 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                n = n - 2021;
                if ((n % 2020 == 0 || n % 2021 == 0))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}