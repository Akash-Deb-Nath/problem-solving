#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, r = 0, p = 0, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        r = r + x;
        p = p + y;
        t = t + z;
    }
    if (r == 0 && p == 0 && t == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}