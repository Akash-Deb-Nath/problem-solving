#include <iostream>

using namespace std;

int main()
{
    int n, x, i, r = 0, p;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        r = r + x;
    }
    if (r % 4 != 0)
    {
        p = (r / 4) + 1;
    }
    else
    {
        p = (r / 4);
    }
    cout << p << endl;

    return 0;
}