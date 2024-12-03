#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int temp = 0;
    while (n--)
    {
        char ch;
        long long int a;
        cin >> ch;
        cin >> a;
        if (ch == 'P')
        {
            temp = temp + a;
        }
        if (ch == 'B')
        {
            if (temp > a)
            {
                cout << "No" << endl;
                temp = temp - a;
            }
            else if (temp == a)
            {
                cout << "No" << endl;
                temp = 0;
            }
            else
            {
                cout << "Yes" << endl;
                temp = 0;
            }
        }
    }

    return 0;
}