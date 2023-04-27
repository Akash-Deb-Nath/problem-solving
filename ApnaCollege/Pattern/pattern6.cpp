#include <iostream>

using namespace std;

int main()
{
    int n, i, j, p = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << p;
            p = p + 1;
        }
        cout << endl;
    }

    return 0;
}