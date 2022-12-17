#include <iostream>

using namespace std;

int main()
{
    int a, b, r = 0;
    cin >> a >> b;
    while (a * 3 <= b * 2)
    {
        r = r + 1;
        a = a * 3;
        b = b * 2;
    }
    cout << r + 1 << endl;

    return 0;
}