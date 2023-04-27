#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the maximum";
        }
        else
        {
            cout << c << " is the maximum";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the maximum";
        }
        else
        {
            cout << c << " is the maximum";
        }
    }
}