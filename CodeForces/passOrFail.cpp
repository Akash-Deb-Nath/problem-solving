#include <iostream>
using namespace std;

int main()
{
    int T, N, X, P, i, r;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> N >> X >> P;
        r = (3 * X) - (N - X);
        cout << r << endl;
        if (r >= P)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    return 0;
}