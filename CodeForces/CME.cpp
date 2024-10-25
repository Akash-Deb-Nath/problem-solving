#include <iostream>

using namespace std;

int main()
{
    int q, n;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        if (n % 2 != 0)
        {
            cout << 1 << endl;
        }
        else if (n % 2 == 0 && n > 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}