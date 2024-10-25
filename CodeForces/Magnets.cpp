#include <iostream>

using namespace std;

int main()
{
    int n, x, p, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (p == x)
        {
            r = r + 0;
        }
        else
        {
            r = r + 1;
        }
        p = x;
    }
    cout << r << endl;

    return 0;
}