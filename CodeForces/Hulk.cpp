#include <iostream>

using namespace std;

int main()
{
    int n;
    string a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a = a + "I love ";
            if (i == n)
            {
                a = a + "it ";
            }
            else
            {
                a = a + "that ";
            }
        }
        else
        {
            a = a + "I hate ";
            if (i == n)
            {
                a = a + "it ";
            }
            else
            {
                a = a + "that ";
            }
        }
    }
    cout << a << endl;

    return 0;
}