#include <iostream>

using namespace std;

int main()
{
    int n, a, b, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (b > a)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "Happy Alex";
    }
    else
    {
        cout << "Poor Alex";
    }

    return 0;
}