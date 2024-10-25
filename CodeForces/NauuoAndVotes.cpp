#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b + c)
    {
        cout << "+";
    }
    else if (a != b && b > a + c)
    {
        cout << "-";
    }
    else if (a == b && a == b + c)
    {
        cout << "0";
    }
    else if (b + c >= a || a + c >= b)
    {
        cout << "?";
    }
    else
    {
        cout << "0";
    }

    return 0;
}