#include <iostream>
using namespace std;
int main()
{
    int n, h, x[1000], i, r = 0;
    cin >> n >> h;
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (i = 0; i < n; i++)
    {
        if (x[i] > h)
        {
            r = r + 2;
        }
        else
        {
            r = r + 1;
        }
    }
    cout << r << endl;
    return 0;
}