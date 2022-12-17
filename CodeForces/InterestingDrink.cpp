#include <iostream>

using namespace std;

int main()
{
    int n, p, a, r = 0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            if (a >= x[i])
            {
                r = r + 1;
            }
        }
        cout << r << endl;
        r = 0;
    }

    return 0;
}