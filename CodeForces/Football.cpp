#include <iostream>

using namespace std;

int main()
{
    int n, r = 0, p = 0;
    string c[1000], x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        x = c[0];
        if (x != c[i])
        {
            y = c[i];
            r = r + 1;
        }
        else
        {
            x = c[0];
            p = p + 1;
        }
    }
    if (r > p)
    {
        cout << y << endl;
    }
    else
    {
        cout << x << endl;
    }

    return 0;
}