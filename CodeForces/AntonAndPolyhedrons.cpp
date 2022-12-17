#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a = 0, x;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            x = 4;
        }
        else if (s == "Cube")
        {
            x = 6;
        }
        else if (s == "Octahedron")
        {
            x = 8;
        }
        else if (s == "Dodecahedron")
        {
            x = 12;
        }
        else if (s == "Icosahedron")
        {
            x = 20;
        }

        a = a + x;
    }
    cout << a << endl;

    return 0;
}