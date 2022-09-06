#include <iostream>
using namespace std;
int main()
{
    int n, i, x[1000];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    if (x[0] > x[1])
    {
        cout << x[0] << endl;
    }
    else
    {
        cout << x[1] << endl;
    }
}