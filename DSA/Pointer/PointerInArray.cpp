#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*
    ll arr[10] = {2, 5, 6};
    cout << "Adress of the first memory block = " << arr << "\n";
    cout << "Adress of the first memory block = " << &arr[0] << "\n";
    cout << *arr + 1 << "\n";
    cout << *(arr + 1) << "\n";
    cout << *(arr) + 1 << "\n";
    cout << 2 [arr] << "\n";
    cout << *(2 + arr) << "\n";
    int temp[10] = {1, 2};
    cout << "Size of temp = " << sizeof(temp) << "\n";
    cout << "Print the first value of temp = " << *temp << "\n";
    cout << "Size of first value of temp = " << sizeof(*temp) << "\n";
    int *ptr = &temp[0];
    cout << "Size of ptr = " << sizeof(ptr) << "\n";
    cout << "Size of the address of ptr = " << sizeof(&ptr) << "\n";
    // The size of address always 8 bytes
    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << "\n";
    cout << &a << "\n";
    cout << a << "\n";

    int *p = &a[0];
    cout << p << "\n";
    cout << *p << "\n";
    cout << &p << "\n";
    */
    int arr[10];
    // arr=arr+1; will give error,symbol table change kora jay na
    int *ptr = &arr[0];
    cout << ptr << "\n";
    ptr = ptr + 1;
    cout << ptr << "\n";
    return 0;
}