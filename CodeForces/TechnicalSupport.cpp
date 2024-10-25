#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < x; i++)
        {
            ans += (s[i] == 'Q');
            ans = max(0, ans - (s[i] == 'A'));
        }
        if (ans == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}