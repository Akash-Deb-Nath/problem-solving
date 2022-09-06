#include <iostream>
using namespace std;
int main()
{
    int n, a[1000], b[1000], x, i, r = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        x = b[i] - a[i + 1] + b[i + 1];
        if (x >= r)
        {
            r = x;
        }
        if (r < a[0] || r < b[0] || r < a[1] || r < b[1])
        {
            if ((a[0] != 0 || a[1] != 0) && (b[0] != 0 || b[1] != 0))
            {
                if ((a[0] >= b[0]) || (a[0] >= a[1]) || (a[0] >= b[1]))
                {
                    r = a[0];
                }
                else if ((b[0] >= a[0]) || (b[0] >= a[1]) || (b[0] >= b[1]))
                {
                    r = b[0];
                }
                else if ((a[1] >= a[0]) || (a[1] >= b[0]) || (a[1] >= b[1]))
                {
                    r = a[1];
                }
                else
                {
                    r = b[1];
                }
            }
        }

        b[i + 1] = x;
    }
    if (n == 2)
    {
        for (i = 0; i < n; i++)
        {
            if ((a[i] == b[i + 1]) && (a[i + 1] == b[i]))
            {
                if (a[i] >= b[i])
                {
                    r = a[i];
                }
                else
                {
                    r = b[i];
                }
            }
        }
    }

    // for (i = 0; i < n; i++)
    // {
    //     if ((a[0] != 0 || a[1] != 0) && (b[0] != 0 || b[1] != 0))
    //     {
    //         if ((a[i] >= b[i]) || (a[i] <= a[i + 1]) || (a[i] >= b[i + 1]))
    //         {
    //             r = a[i];
    //         }
    //         else if ((b[i] >= a[i]) || (b[i] <= a[i + 1]) || (b[i] >= b[i + 1]))
    //         {
    //             r = b[i];
    //         }
    //         else if ((a[i + 1] >= a[i]) || (a[i + 1] <= b[i]) || (a[i + 1] >= b[i + 1]))
    //         {
    //             r = a[i + 1];
    //         }
    //         else
    //         {
    //             r = b[i + 1];
    //         }
    //     }
    // }

    cout << r << endl;
    return 0;
}