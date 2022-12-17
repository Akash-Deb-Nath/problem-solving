#include <iostream>

using namespace std;

int main()
{
    int n, a, b, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (b - a >= 2)
        {
            r = r + 1;
        }
    }
    cout << r << endl;

    return 0;
}