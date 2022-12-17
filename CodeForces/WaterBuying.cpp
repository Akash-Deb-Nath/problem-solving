#include <iostream>

using namespace std;

int main()
{
    long long int n, x, y, z, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if (x % 2 == 1)
        {
            x--;
            r = r + y;
        }
        if (2 * y >= z)
        {
            r = r + z * (x / 2);
        }
        else
        {
            r = r + x * y;
        }
        cout << r << endl;
        r = 0;
    }

    return 0;
}