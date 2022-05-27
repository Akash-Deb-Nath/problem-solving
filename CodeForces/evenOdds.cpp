#include <iostream>
using namespace std;

int main()
{
    int x, n, i, a[100], r;
    cin >> x >> n;
    for (i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            r = i;
            a[i - 1] = r;
            cout << a[i - 1] << endl;
        }
    }
    return 0;
}