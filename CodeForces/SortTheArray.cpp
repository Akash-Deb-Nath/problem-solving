#include <bits/stdc++.h>

using namespace std;

bool sortByReversingSegment(vector<int> &a, int &l, int &r)
{
    int n = a.size();
    l = -1, r = -1;

    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] > a[i + 1])
        {
            l = i;
            break;
        }
    }

    if (l == -1)
    {
        return true;
    }

    for (int i = l; i < n - 1; ++i)
    {
        if (a[i] < a[i + 1])
        {
            r = i;
            break;
        }
    }

    if (r == -1)
    {
        r = n - 1;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int l, r;
    if (sortByReversingSegment(a, l, r))
    {
        cout << "yes" << endl;
        if (l != -1 && r != -1)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << 1 << " " << 1 << endl;
        }
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}