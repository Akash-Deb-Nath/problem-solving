#include <iostream>

using namespace std;

int main()
{
    int l, i;
    string s;
    cin >> s;
    l = s.length();
    for (i = 0; i < l; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (i == l)
    {
        cout << "NO" << endl;
    }

    return 0;
}