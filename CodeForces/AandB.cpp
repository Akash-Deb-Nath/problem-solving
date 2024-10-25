#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        int j = 1;
        while (a != b)
        {
            if (a < b)
            {
                if (a + j > b)
                {
                    b = b + j;
                }
                else if (a + j < b)
                {
                    a = a + j;
                }
                else
                {
                    cout << j << endl;
                    break;
                }
            }
            else if (a > b)
            {
                if (b + j > a)
                {
                    a = a + j;
                }
                else if (b + j < a)
                {
                    b = b + j;
                }
                else
                {
                    cout << j << endl;
                    break;
                }
            }
            j++;
        }
    }

    return 0;
}