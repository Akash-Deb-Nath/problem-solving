#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> m;
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        if (islower(s[i]))
        {
            m[s[i]]++;
        }
        else
        {
            if (m[tolower(s[i])] > 0)
            {
                m[tolower(s[i])]--;
            }
            else
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}