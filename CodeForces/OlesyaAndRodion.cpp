#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n, r = 0, p = 0, x;
    string t, s;
    cin >> n >> t;
    int temp = stoi(t);
    x = temp;
    while (temp > 0)
    {
        p++;
        temp = (temp / 10);
    }
    if (p > n)
    {
        cout << -1 << endl;
    }
    else if (p <= n && p >= 2)
    {
        for (int i = n; i >= 1; i--)
        {
            if (x < 10)
            {
                r = r + (x * (round(pow(10, i - 1))));
            }
            else
            {
                r = r + (x * (round(pow(10, i - p))));
            }
        }
        cout << to_string(r) << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            s = s + t;
        }
        cout << s << endl;
    }

    return 0;
}