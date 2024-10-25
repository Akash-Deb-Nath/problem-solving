#include <iostream>

using namespace std;

int main()
{
    int n, x, y, a, b;
    cin >> n;
    if (n % 2 == 0)
    {
        x = n / 2;
        y = n / 2;
    }
    else
    {
        a = (n - 1) / 2;
        b = (n - 1) / 2 + 1;
        for (int i = 2; i < n; i++)
        {
            a = a - 1;
            b = b + 1;
            if ((a + b == 15) && (a % i == 0) && ((b % i == 0)))
            {
                x = a;
                y = b;
            }
        }
    }
    cout << x << " " << y << endl;

    return 0;
}