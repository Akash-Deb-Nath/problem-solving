#include <iostream>

using namespace std;

int main()
{
    int n, r;
    cin >> n;
    int temp = n;
    if (n >= 4)
    {
        while (n > 0)
        {
            if (n % 10 == 4 || n % 10 == 7)
            {
                r = 1;
            }
            else
            {
                r = 0;
                break;
            }
            n = n / 10;
        }
    }
    n = temp;
    if (r == 1)
    {
        cout << "YES" << endl;
    }
    else if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}