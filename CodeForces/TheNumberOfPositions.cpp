#include <iostream>

using namespace std;

int main()
{
    int n, a, b, r;
    cin >> n >> a >> b;
    r = n - max(a + 1, n - b) + 1;
    cout << r << endl;
    return 0;
}