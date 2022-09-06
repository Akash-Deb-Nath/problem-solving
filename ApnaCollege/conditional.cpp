#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout << "Savings = ";
    cin >> savings;
    if (savings > 5000)
    {
        cout << "Neha";
    }
    else if (savings > 2000)
    {
        cout << "Rashmi";
    }
    else
    {
        cout << "Friends";
    }
}