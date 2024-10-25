#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        a[0] = a[0] + 1;
        for (int i = 0; i < n; i++)
        {
            r = r * a[i];
        }
        cout << r << endl;
    }

    return 0;
}
তবে যার জন্য একটু অপেক্ষা, তার জন্য আমাকে দাড় করিয়ে না রাখা অনুচিত