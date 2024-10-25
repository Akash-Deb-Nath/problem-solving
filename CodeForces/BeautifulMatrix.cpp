#include <iostream>

using namespace std;

int main()
{
    int x[10][10], r;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x[i][j];
            if (x[i][j] == 1)
            {
                if (i >= 3 && j >= 3)
                {
                    r = ((i - 3) + (j - 3));
                }
                else if (i >= 3 && j < 3)
                {
                    r = ((i - 3) + (3 - j));
                }
                else if (i < 3 && j >= 3)
                {
                    r = ((3 - i) + (j - 3));
                }
                else
                {
                    r = ((3 - i) + (3 - j));
                }
            }
        }
    }
    cout << r << endl;

    return 0;
}