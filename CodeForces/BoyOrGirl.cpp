#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    if (str.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}