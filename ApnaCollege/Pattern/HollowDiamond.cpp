#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if ((i + j == (n + 1)) || (i + (n - 1) == j))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if ((i + j == (2 * n)) || (j == i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}