#include <iostream>
using namespace std;

int main()
{
    int x, y, i, a[100], r = 0;
    cin >> x >> y;
    for (i = 1; i <= x; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= x; i++)
    {
        if (a[i] == 0 && a[y] == 0)
        {
            r = r;
        }
        else if (a[i] >= a[y])
        {
            r = r + 1;
        }
    }
    cout << r << endl;

    return 0;
}