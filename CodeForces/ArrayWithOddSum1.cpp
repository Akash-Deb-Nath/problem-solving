#include <iostream>
using namespace std;
int main()
{
    int t, a[1000], n[1000], i, j, x, r = 0, p = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a[i];
        for (j = 0; j < a[i]; j++)
        {
            cin >> n[j];
            if (n[j] % 2 == 0)
            {
                r = r + 1;
            }
            else if (n[j] % 2 != 0)
            {
                p = p + 1;
            }
        }
        if (((r % 2 == 0) && (p % 2 == 0)) && (r == a[i] || p == a[i]))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        r = 0;
        p = 0;
    }
    return 0;
}