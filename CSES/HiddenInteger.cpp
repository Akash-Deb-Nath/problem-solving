#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool ask(ll y)
{
    cout << "? " << y << endl;
    cout.flush();
    string s;
    cin >> s;
    return (s == "YES");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l = 1, r = 1e9;
    ll mid;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (ask(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << "! " << l << endl;
    cout.flush();

    return 0;
}