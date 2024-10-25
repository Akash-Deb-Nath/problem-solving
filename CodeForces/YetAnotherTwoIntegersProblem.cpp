#include <iostream>

using namespace std;

int main()
{
    int n, a, b, i, r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if ((max(a, b) - min(a, b)) % 10 != 0)
        {
            r = (max(a, b) - min(a, b)) / 10 + 1;
        }
        else
        {
            r = (max(a, b) - min(a, b)) / 10;
        }
        cout << r << endl;
    }

    return 0;
}