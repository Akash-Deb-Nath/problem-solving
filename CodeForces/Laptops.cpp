#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], b[1000], r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[0] < a[1]) && (b[0] > b[1]))
        {
            r = 1;
        }
        else
        {
            r = 0;
        }
        a[0] = a[i];
        a[1] = a[i + 1];
        b[0] = b[i];
        b[1] = b[i + 1];
    }
    if (r == 1)
    {
        cout << "Happy Alex";
    }
    else
    {
        cout << "Poor Alex";
    }

    return 0;
}