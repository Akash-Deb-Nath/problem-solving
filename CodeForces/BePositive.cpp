#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    int x, p = 0, N = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            p = p + 1;
        }
        else if (x < 0)
        {
            N = N + 1;
        }
    }
    if (p >= ceil(n / 2))
    {
        cout << 1;
    }
    else if (N >= ceil(n / 2))
    {
        cout << -1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}