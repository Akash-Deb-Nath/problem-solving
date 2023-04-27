#include <iostream>
using namespace std;

int main()
{
    long long int x, n, r = 1, l;
    cin >> x >> n;
    l = (x / 2);
    for (int i = 1; i <= x; i += 2)
    {
        if (r == n)
        {
            cout << i << endl;
            return 0;
        }
        r++;
    }
    int p = r;
    for (int i = 2; i <= x; i += 2)
    {
        if (p == n)
        {
            cout << i << endl;
            return 0;
        }
        p++;
    }

    return 0;
}