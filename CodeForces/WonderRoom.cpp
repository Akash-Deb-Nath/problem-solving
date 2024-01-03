#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int tempA = a, tempB = b;
    if (a * b >= 6 * n)
    {
        cout << a * b << endl;
        cout << a << " " << b << endl;
    }
    else
    {
        while (a * b < 6 * n)
        {
            if (6 * n % a == 0)
            {
                b = 6 * n / a;
            }
            if (6 * n % b == 0)
            {
                a = 6 * n / b;
            }
            if (tempA == tempB && ((6 * n) % tempA) > 2)
            {
                b = (6 * n) / a;
                b = b + 1;
            }
            if (a * b < 6 * n)
            {
                a = a + 1;
                if (a * b < 6 * n)
                {
                    b = b + 1;
                }
            }
        }
        cout << a * b << endl;
        cout << a << " " << b << endl;
    }

    return 0;
}