#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*ll i = 5;
    ll *q = &i;
    cout << q << "\n";
    cout << *q << "\n";

    // Pointer to ll is created and pointing to null memory
    ll *p = 0;
    // Pointer p will point to address of i
    p = &i;
    cout << p << "\n";
    cout << *p << "\n";*/

    ll num = 5;
    ll a = num;
    cout << " a before " << num << "\n";
    a++;
    cout << " a after " << num << "\n";

    ll *p = &num;
    cout << "before " << num << "\n";
    (*p)++;
    cout << "after " << num << "\n";

    // Coping a pointer
    ll *q = p;
    cout << p << " - " << q << "\n";
    cout << *p << " - " << *q << "\n";
    return 0;
}