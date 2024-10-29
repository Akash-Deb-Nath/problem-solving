#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n > 1 && n <= 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {

            a.push_back(i);
        }
        for (int i = 1; i <= n; i += 2)
        {

            a.push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}