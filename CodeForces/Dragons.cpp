#include <iostream>

using namespace std;

int main()
{
    int n, s, r;
    cin >> s >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                int tempX = x[j];
                x[j] = x[i];
                x[i] = tempX;
                int tempY = y[j];
                y[j] = y[i];
                y[i] = tempY;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s > x[i])
        {
            r = 1;
            s = s + y[i];
        }
        else
        {
            r = 0;
            break;
        }
    }

    if (r == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}