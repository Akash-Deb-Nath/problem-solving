#include <iostream>
using namespace std;

int main()
{
    long long int x, y, n;
    cin >> x >> y >> n;
    if ((x * y) % (n * n) == 0)
    {
        cout << (x * y) / (n * n);
    }
    else if ((x * y) < (n * n))
    {
        cout << ((x * y) / (n * n)) + 1;
    }
    else if (x < y)
    {
        cout << x;
    }
    else if ((x * y) % (n * n) <= (n * n))
    {
        cout << n;
    }
    return 0;
}
