#include <iostream>
using namespace std;

int main()
{
    int x, n, i, j, a[100000], r = 1, l, p = 2;
    cin >> x >> n;
    if (x % 2 == 0)
    {
        l = (x / 2);
    }
    else if (x % 2 != 0)
    {
        l = (x / 2) + 1;
    }

    for (i = 1; i <= l; i++)
    {
        a[i - 1] = r;
        r = r + 2;
        if (n == i)
        {
            cout << a[n - 1];
        }
    }
    for (i = l; i < x; i++)
    {
        a[l] = p;
        p = p + 2;
        if ((n - 1) == i)
        {
            cout << a[l];
        }
    }

    return 0;
}