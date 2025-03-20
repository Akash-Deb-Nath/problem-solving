#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll num;
    cin >> num;
    cout << "Address of num is = " << &num << "\n";
    // Intialization of a pointer
    ll *ptr = &num;
    cout << "Address of ptr is = " << ptr << "\n";
    cout << "Value of num using ptr = " << *ptr << "\n";

    // Initialization of a pointer to double
    double d = 5.5;
    double *dptr = &d;
    cout << "Address of dptr is = " << dptr << "\n";
    cout << "Value of d using dptr = " << *dptr << "\n";

    // Determine size using sizeof function
    cout << "Size of num = " << sizeof(num) << " bytes\n";
    cout << "Size of ptr = " << sizeof(ptr) << " bytes\n";
    cout << "Size of d = " << sizeof(d) << " bytes\n";
    cout << "Size of dptr = " << sizeof(dptr) << " bytes\n";
    return 0;
}