#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    int flag;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            flag = 0;
        }
        else if (a[i] < b[i])
        {
            flag = -1;
            break;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << flag << endl;
    }
    else if (flag == -1)
    {
        cout << flag << endl;
    }
    else
    {
        cout << flag << endl;
    }

    return 0;
}