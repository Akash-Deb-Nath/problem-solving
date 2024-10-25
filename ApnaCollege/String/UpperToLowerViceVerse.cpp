#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    // To convert into uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i <= 'z'])
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;
    // Convert to lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i <= 'Z'])
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    return 0;
}