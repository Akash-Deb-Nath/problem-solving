#include <iostream>

using namespace std;

int main()
{
    int x, n, t;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n >> t;
        if ((n % 2 == 0 && t % 2 == 0) || (n % 2 != 0 && t == 1))
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