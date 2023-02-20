#include <iostream>

using namespace std;

int main()
{
    int a, b, r;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        b = b + (i * 5);
        if (b > 240)
        {
            r = i - 1;
            break;
        }
        else
        {
            r = i;
        }
    }
    cout << r << endl;

    return 0;
}