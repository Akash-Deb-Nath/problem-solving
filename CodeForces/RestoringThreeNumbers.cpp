#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x, y, z, r;
    cin >> a >> b >> c >> d;
    r = max(a, max(b, max(c, d)));
    if (r - a == 0)
    {
        x = r - b;
        y = r - c;
        z = r - d;
    }
    else if (r - b == 0)
    {
        x = r - a;
        y = r - c;
        z = r - d;
    }
    else if (r - c == 0)
    {
        x = r - a;
        y = r - b;
        z = r - d;
    }
    else
    {
        x = r - a;
        y = r - b;
        z = r - c;
    }
    cout << x << " " << y << " " << z << endl;

    return 0;
}