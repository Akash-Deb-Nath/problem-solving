#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            r = 0;
        }
        else
        {
            r = 1;
        }
        a[i] = a[i + 1];
        b[i] = b[i + 1];
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