#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] % 2 == 0)
        {
            a = a + 1;
        }
        else
        {
            b = b + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a > b)
        {
            if (x[i] % 2 != 0)
            {
                cout << i + 1 << endl;
            }
        }
        else
        {
            if (x[i] % 2 == 0)
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}