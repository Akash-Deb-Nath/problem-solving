#include <iostream>

using namespace std;

int main()
{
    float a, b, p, r;
    cin >> a >> b;
    p = a / b;
    r = a + p;
    for (int i = 1;; i++)
    {
        if (p >= b)
        {
            p = p / b;
            r = r + p;
        }
        else if (p < b)
        {
            r = r + (p / b);
            break;
        }
    }
    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << int(r) << endl;
    }

    return 0;
}