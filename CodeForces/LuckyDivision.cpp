#include <iostream>

using namespace std;

int main()
{
    int n, r, p;
    cin >> n;
    // if (n >= 4)
    // {
    //     while (n >= 0)
    //     {
    //         if (n % 10 == 4 || n % 10 == 7)
    //         {
    //             r = 1;
    //         }
    //         else
    //         {
    //             r = 0;
    //             break;
    //         }
    //         n = n / 10;
    //     }
    // }
    // if (r == 1)
    // {
    //     cout << "YES" << endl;
    // }
    // else if (n % 4 == 0 || n % 7 == 0)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    for (int i = n; i >= 1; i--)
    {
        if (i >= 4)
        {
            while (i >= 0)
            {
                if (i % 10 == 4 || i % 10 == 7)
                {
                    r = 1;
                }
                else
                {
                    r = 0;
                    break;
                }
                i = i / 10;
            }
        }
        if (r == 1 || i % 4 == 0 || i % 7 == 0)
        {
            // cout << "YES" << endl;
            if (n % i == 0)
            {
                p = 1;
                cout << "YES" << endl;
            }
        }
        else
        {
            p = 0;
        }
    }
    if (p == 1)
    {
        cout << "YES" << endl;
    }
    else if (p == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}