#include <iostream>

using namespace std;

int main()
{
    int n, a, i, r = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        r = r + a;
        cout << r << " ";
        if (a < 0)
        {
            r = r - a;
        }
    }

    return 0;
}