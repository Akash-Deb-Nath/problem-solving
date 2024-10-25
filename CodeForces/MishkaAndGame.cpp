#include <iostream>

using namespace std;

int main()
{
    int n, a, b, x = 0, y = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            x = x + 1;
        }
        else if (a < b)
        {
            y = y + 1;
        }
    }
    if (x > y)
    {
        cout << "Mishka" << endl;
    }
    else if (x < y)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}