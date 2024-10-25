#include <iostream>

using namespace std;

int main()
{
    int n, k, i, x, r;
    cin >> n >> k;
    for (i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            x = (n / 10) + 1;
        }
        else
        {
            x = n;
        }
        n = x - 1;
    }
    cout << n << endl;
    return 0;
}