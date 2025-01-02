#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void reverse(char name[], ll n)
{
    ll start = 0;
    ll end = n - 1;
    while (start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

ll getLength(char name[])
{
    ll count = 0;
    for (ll i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;
    // name[2] = '\0';
    cout << "Your name is " << name << endl;
    ll n = getLength(name);
    cout << "Length: " << n << endl;
    reverse(name, n);
    cout << "Reversed name: " << name << endl;
    return 0;
}