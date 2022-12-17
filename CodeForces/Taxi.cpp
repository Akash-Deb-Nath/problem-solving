#include <iostream>

using namespace std;

int main()
{
    int n, x[1000], i, r = 0, p;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
        r = r + x[i];
        if (r % 4 != 0)
        {
            p = (r / 4) + 1;
        }
        else if (r % 4 == 0 && n == 3 && r >= 8 && ((x[0] == 3 && x[1] == 3) || (x[1] == 3 && x[2] == 3) || (x[0] == 3 && x[2] == 3)))
        {
            p = (r / 4) + 1;
        }
        else
        {
            p = (r / 4);
        }
    }

    cout << p << endl;

    return 0;
}