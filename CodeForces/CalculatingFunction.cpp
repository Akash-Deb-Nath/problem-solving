#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x, r = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = pow(-1, i);
        r = r + (x * i);
    }
    cout << r << endl;

    return 0;
}