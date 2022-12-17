#include <iostream>

using namespace std;

int main()
{
    int n, x, q = 0, a = 0;
    char s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> s;
            if (s == 'Q')
            {
                q = q + 1;
            }
            else
            {
                a = a + 1;
            }
        }
        if (q < a || (q <= a && s != 'Q'))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        q = 0;
        a = 0;
    }

    return 0;
}