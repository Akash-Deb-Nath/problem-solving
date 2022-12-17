#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int r = 2;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                r = r + 1;
            }
        }
        if (r == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}