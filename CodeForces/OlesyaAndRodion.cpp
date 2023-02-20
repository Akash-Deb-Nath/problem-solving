#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, t, a, b, p;
    cin >> n >> t;
    p = n - 1;
    a = round(pow(10, p));
    b = pow(10, n);
    while (a < b)
    {
        if (a % t == 0)
        {
            cout << a << endl;
            break;
        }
        a++;
    }

    return 0;
}