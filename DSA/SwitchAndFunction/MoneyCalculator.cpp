#include <iostream>
using namespace std;

int main()
{
    int amount, deno = 100;
    cout << "Enter the Total Amount: ";
    cin >> amount;
    int count100 = 0, count50 = 0, count20 = 0, count10 = 0;
    switch (deno)
    {
    case 100:
        count100 = amount / 100;
        amount %= 100;

    case 50:
        count50 = amount / 50;
        amount %= 50;

    case 20:
        count20 = amount / 20;
        amount %= 20;

    case 10:
        count10 = amount / 10;
        amount %= 10;
    }
    cout << "No. of 100 notes: " << count100 << endl;
    cout << "No. of 50 notes: " << count50 << endl;
    cout << "No. of 20 notes: " << count20 << endl;
    cout << "No. of 10 notes: " << count10 << endl;

    return 0;
}