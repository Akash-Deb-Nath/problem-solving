#include <iostream>

using namespace std;

int main()
{
    int n, s, x, y, r;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (s > x)
        {
            r = 1;
            s = s + y;
        }
        else
        {
            r = 0;
            s = s + y;
        }
    }
    if (r == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}