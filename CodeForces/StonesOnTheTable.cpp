#include <iostream>
using namespace std;
int main()
{
    int n, i, r = 0;
    char s[1000];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            r = r + 1;
        }
    }
    cout << r << endl;
    return 0;
}