#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cin >> n;
    if (n >= 3)
    {
        if (n % 3 != 0)
        {
            r = 2 * (n / 3) + 1;
        }
        else
        {
            r = 2 * (n / 3);
        }
    }
    else
    {
        r = 1;
    }

    cout << r << endl;

    return 0;
}